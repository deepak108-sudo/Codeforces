#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> a;
vector<vector<ll>> dp;

ll solve(int i,int j){
    if(i>j) return 0;
    if(dp[i][j]!=-1) return dp[i][j];

    ll leftTake=a[i]+min(solve(i+2,j),solve(i+1,j-1));
    ll rightTake=a[j]+min(solve(i+1,j-1),solve(i,j-2));

    return dp[i][j]=max(leftTake,rightTake);
}

int main(){
    int n; cin>>n;
    a.resize(n);

    for(int &i:a){
        cin>>i;
    }

    dp.assign(n,vector<ll>(n,-1));
    cout<<solve(0,n-1);
}