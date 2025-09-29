#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
   int n; cin>>n;

   vector<int> a(n);
   for(int &i:a) cin>>i;

   int mini=a[0];
   for(int i=1;i<n;i++){

        if(a[i]>(2*mini-1)){
            cout<<"NO"<<endl;
            return;
        }
        mini=min(mini,a[i]);
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