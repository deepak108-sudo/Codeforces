#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int MOD=1e9+7;

int main(){
     //Taken input
     int n; cin>>n;

     vector<vector<char>> grid(n,vector<char>(n));

     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
     }

     vector<vector<int>> dp(n,vector<int>(n));
     dp[0][0]= grid[0][0] == '.';

     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]=='*') continue;

            if(i>=1) dp[i][j]+=dp[i-1][j];
            if(j>=1) dp[i][j]+=dp[i][j-1];

            dp[i][j]%=MOD;
        }
     }

     cout<<dp[n-1][n-1]<<endl;
}