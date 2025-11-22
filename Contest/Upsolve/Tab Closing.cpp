#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
   int a,b,n;
   cin>>a>>b>>n;

   if(b>=a || b*n<=a) cout<<1;
   else cout<<2;
   cout<<endl;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}