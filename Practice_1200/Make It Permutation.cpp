#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
   int n; cin>>n;

   cout<<2*n-1<<endl;
   
   for(int i=1;i<n;i++){
    cout<<i<<" "<<1<<" "<<i<<endl;
    cout<<i<<" "<<i+1<<" "<<n<<endl;
   }
   cout<<n<<" "<<1<<" "<<n<<endl;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}