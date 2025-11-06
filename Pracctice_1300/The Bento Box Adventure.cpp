#include<bits/stdc++.h>
using namespace std;
#define int long long
int total=1e9+1;

void solve(){
   int a,s=0;
   for(int i=0;i<4;i++){
    cin>>a; s+=a;
   }

   cout<<15-s<<endl;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    while(t--){
        solve();
    }
}