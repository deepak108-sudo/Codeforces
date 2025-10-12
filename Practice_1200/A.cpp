#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
   int n; cin>>n;

   vector<int> a(101);
   int x;

   for(int i=0;i<n;i++){
        cin>>x;
        a[x]++;
   }

   for(int i=0;i<101;i++) if(a[i]==0){
    cout<<i<<endl;
    return;
   }
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}