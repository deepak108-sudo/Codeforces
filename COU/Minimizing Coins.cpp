#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x; cin>>n>>x;

    vector<int> coins(n);
    for(int &i:coins) cin>>i;

    vector<int> dp(x+1,1e9);
    dp[0]=0;
    for(int sum=1;sum<=x;sum++){
        for(int c:coins){
            if(sum-c<0) continue;
            dp[sum]=min(dp[sum],dp[sum-c]+1);
        }
    }

    if(dp[x]==1e9) cout<<"-1";
    else cout<<dp[x];
    cout<<endl;
}