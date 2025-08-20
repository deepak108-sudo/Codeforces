#include<bits/stdc++.h>
using namespace std;
vector<int> dp;
int mod=1e9+7;

int solve(vector<int> &a,int idx,int t){
    if(t==0)    return 1;
    if(t<0)     return 0;

    if(dp[t]!=-1){
        return dp[t];
    }

    int ans=0;
    for(int i=0;i<a.size();i++){
        ans+=solve(a,idx+1,t-a[i]);
    }

    return dp[t]=ans%mod;
}

int main(){
    int n,x; cin>>n>>x;

    vector<int> a(n);
    for(int &i:a) cin>>i;

    dp.resize(x+1,-1);

    cout<<solve(a,0,x);
}
