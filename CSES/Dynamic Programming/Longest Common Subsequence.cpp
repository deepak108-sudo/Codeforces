#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m; cin>>n>>m;

    vector<int> a(n);
    vector<int> b(m);

    //taking input
    for(int &i:a) cin>>i;
    for(int &i:b) cin>>i;

    vector<vector<int>> dp(m+1,vector<int>(n+1,0));

    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(a[j-1]==b[i-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }

    //print
    cout<<dp[m][n]<<endl;

    //retracing the common things
    vector<int> ans;
    int i=m,j=n;
    while(i>0 && j>0){
        if(a[j-1]==b[i-1]){
            ans.push_back(a[j-1]);
            i--; j--;
        }
        else if(dp[i-1][j]>dp[i][j-1]) i--;
        else j--;
    }

    reverse(begin(ans),end(ans));

    //print
    for(int &i:ans) cout<<i<<" ";
    cout<<endl;
    
}