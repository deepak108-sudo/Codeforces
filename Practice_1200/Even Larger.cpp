#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
   int n; cin>>n;

   vector<int> a(n+2);
   for(int i=1;i<=n;i++) cin>>a[i];

   vector<int> b(n+2,0);

   int ans=0;
   
   for(int i=1;i<=n;i+=2){
        int mini=a[i];

        if(i-2>=1){
            mini=min({mini,a[i-1]-b[i-2]});
        }

        if(i+1<=n){
            mini=min(mini,a[i+1]);
        }
        
        b[i]=mini;
        ans+=(a[i]-b[i]);
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