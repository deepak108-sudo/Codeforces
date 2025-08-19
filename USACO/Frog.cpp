#include<bits/stdc++.h>
using namespace std;
#define read(v) for(int &i:v) cin>>i;

int main(){
    int n; cin>>n;

    vector<int> h(n); 
    for(int &i:h) cin>>i;

    vector<int> dp(n,INT_MAX);

    //dp[0] =0 since we are already at first stone
    dp[0]=0;

    for(int i=1;i<n;i++){
        if(i>=1)
            dp[i]=min(dp[i],dp[i-1]+abs(h[i-1]-h[i]));

        if(i>=2)
            dp[i]=min(dp[i],dp[i-2]+abs(h[i-2]-h[i]));
    }

    cout<<dp[n-1]<<endl;
}