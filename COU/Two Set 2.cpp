#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;


signed main(){
    int n; cin>>n;
    int s=n*(n+1)/2;

    //hadling odd
    if(s&1){
        cout<<0<<endl;
        return 0;
    }
    int target=s/2;

    vector<vector<int>> dp(n+1,vector<int>(target+1,0));
    dp[0][0]=1;

    for(int i=1;i<n;i++){
        for(int j=0;j<=target;j++){
            dp[i][j]=dp[i-1][j]; //not take;

            int remaining=j-i;
            if(remaining>=0)
                dp[i][j]=(dp[i][j] + dp[i-1][remaining])%mod;
        }
    }

    cout<<dp[n-1][target]<<endl;
}
