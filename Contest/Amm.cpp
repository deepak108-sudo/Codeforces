#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
   int n; cin>>n;
   string s; cin>>s;

   bool f=false;
   int cnt=0;
   for(int i=0;i+3<n;i++){
       if(s.substr(i,4)=="2026"){
           cout<<0<<endl;
           return;
       }


    if(s.substr(i,4)=="2025"){
       // cout<<"yes i am in";
       cnt++;
        f=true;
    }
   }

   if(f==false){
        cout<<0<<endl;
   }
   else{
    cout<<1<<endl;
   }
}

signed main(){
  int t; cin>>t;
  while(t--){
      solve();
  }
}