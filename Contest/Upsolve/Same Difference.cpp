#include<bits/stdc++.h>
using namespace std;
#define int long long
int total=1e9+1;

void solve(){
   int n; cin>>n;
   string s; cin>>s;

   int cntLast=0;
   for(auto ch:s){
    if(ch==s[n-1]) cntLast++;
   }

   cout<<n-cntLast<<endl;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}