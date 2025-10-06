#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
   int n; cin>>n;

   vector<int> a(n+1,0);
   for(int i=1;i<=n;i++) cin>>a[i];

    vector<int> dp(n+1);
   vector<deque<int>> q(n+1);

   for(int i=1;i<=n;i++){
        dp[i]=dp[i-1];
        q[a[i]].push_back(i);

        if(q[a[i]].size()>a[i]) q[a[i]].pop_front();

        if(q[a[i]].size()<a[i]) dp[i]=dp[i-1];

        if(q[a[i]].size()==a[i]){
            int last_occ_ind=q[a[i]].front();
            dp[i]=max(dp[i],dp[last_occ_ind-1]+a[i]);
        }
   }

   cout<<dp[n]<<endl;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}