#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
   int n; cin>>n;

   vector<int> a(n,0);
   for(int &i:a) cin>>i;

   sort(begin(a),end(a));

   //Play
   for(int i=1;i<n-1;i+=2){
    if(a[i]!=a[i+1]){
        cout<<"NO"<<endl;
        return;
    }
   }

   cout<<"YES"<<endl;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}