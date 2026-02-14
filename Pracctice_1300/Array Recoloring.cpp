#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
   int n,k; cin>>n>>k;

   vector<int> a(n);

   for(int i=0;i<n;i++){
    cin>>a[i];
   }

   if(k==1){
    int mxA=*max_element(begin(a)+1,end(a));
    int mxB=*max_element(begin(a),end(a)-1);

    cout<<max(mxA+a[0],mxB+a[n-1])<<endl;
    return;
   }

   sort(begin(a),end(a),greater<>());
   int ans=accumulate(begin(a),begin(a)+k+1,0LL);

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