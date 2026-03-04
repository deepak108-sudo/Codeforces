#include<bits/stdc++.h>
using namespace std;

void solve(){
   int n; cin>>n;
   string s; cin>>s;
   int zero=0,one=0;

   for(auto &ch:s){
    if(ch=='1') one++;
    else zero++;
   }

   if(one>=zero) cout<<"YES";
   else cout<<"NO";
   
   cout<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
    //cout<<"noice"<<endl;
}