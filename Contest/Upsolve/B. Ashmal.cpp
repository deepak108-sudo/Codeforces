#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
   int n; cin>>n;
   //Check
   string ans="";
   string str;
   for(int i=0;i<n;i++){
      cin>>str;
      ans=min(str+ans,ans+str);
   }

   cout<<ans<<endl;
}
signed main(){
  int t; cin>>t;
  while(t--){
      solve();
  }
}