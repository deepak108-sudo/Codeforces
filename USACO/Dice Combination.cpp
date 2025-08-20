#include<bits/stdc++.h>
using namespace std;
vector<long long> dp;
int mod=1e9+7;

int main(){
    int n; cin>>n;

    dp.resize(n+1,0);
    dp[0]=1;

    for(int sum=1;sum<=n;sum++){
        for(int dice=1;dice<=6 ;dice++){
            if(sum-dice<0) break;
            dp[sum]=(dp[sum]+dp[sum-dice])%mod;

           // dp[sum]%=mod;
        }
    }
    cout<<dp[n]<<endl;
}