#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
   //dp[i][who] : define who killed and minimum skip to kill. who: 1 for my friend and 0 for me
   //dp[i][0] = minimum skips upto i if *YOU* kill boss i
    //dp[i][1] = minimum skips upto i if *FRIEND* kills boss i
   int n; cin>>n;
   vector<int> a(n);
   for(int &i:a) cin>>i;

   //Edge case
   if (n == 1) {
    cout << a[0] << "\n";
    return;
}
   
    vector<vector<int>> dp(n+1,vector<int>(2,0));

   dp[n][0]=0;
   dp[n][1]=0;

   dp[n-1][0]=0;
   dp[n-1][1]=a[n-1];
    for(int i=n-2;i>=0;i--){
        dp[i][0]=min(dp[i+1][1],dp[i+2][1]);
        dp[i][1]=min(dp[i+1][0]+a[i],dp[i+2][0]+a[i]+a[i+1]);
    }

    cout<<dp[0][1]<<endl;

}
signed main(){
  int t; cin>>t;
  while(t--){
      solve();
  }
}