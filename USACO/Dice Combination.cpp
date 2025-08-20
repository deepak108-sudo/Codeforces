#include<bits/stdc++.h>
using namespace std;
vector<long long> dp;


long long solve(long long sum){
    if(sum==0)  return 1;
    if(sum<0)   return 0;

    if(dp[sum] != -1) return dp[sum];
    
    long long ans=0;
    for(int i=1;i<=6;i++){
        ans+=solve(sum-i);
    }

    return dp[sum]=ans;
}

int main(){
    int n; cin>>n;

    dp.resize(n+1,-1);
    cout<<solve(n);
}