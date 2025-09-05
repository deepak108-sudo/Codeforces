#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;

vector<vector<long long>> dp;
int solve(int total,int i,long long sum,int n){
    if(i>n) return 0;
    if(sum==total/2) return 1; 

    if(dp[sum][i]!=-1) return dp[sum][i];
    
    int take=solve(total,i+1,sum+i,n);
    int skip=solve(total,i+1,sum,n);

    return dp[sum][i]=(take+skip)%mod;
}


signed main(){
    int n; cin>>n;
    bool f=false;
    
    long long s=n*(n+1)/2;

    if(s%2!=0){
        cout<<0<<endl;
        f=true;
    }

    if(f==false){
        dp.resize(s+1,vector<long long>(n+1,-1));
    
        cout<<solve(s,1,0,n)<<endl;
    }
}
