#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
   int n,k; cin>>n>>k;
   vector<int> a(n);
   vector<int> b(n);

   for(int &i:a) cin>>i;
   for(int &i:b) cin>>i;

   //If k is even then alice increment decremented by bob so no effect
   vector<int> dp(n);
   dp[0]=a[0];
   for(int i=1;i<n;i++){
        dp[i]=max(dp[i-1]+a[i],a[i]);
   }


   if((k&1)==0){
    cout<<*max_element(begin(dp),end(dp))<<endl;
    return;
   }

   //Now its time
   vector<int> dp1(n);
   dp1[n-1]=a[n-1];
   for(int i=n-2;i>=0;i--){
    dp1[i]=max(dp1[i+1]+a[i],a[i]);
   }
   
   //Check
   int ans=LLONG_MIN;
   for(int i=0;i<n;i++){
        ans=max(ans,dp[i]+dp1[i]-a[i]+b[i]);
   }

   cout<<ans<<endl;

}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}