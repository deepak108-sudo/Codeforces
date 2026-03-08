#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
   int n; cin>>n; 
   string s; cin>>s;
   string t=s;

   for(int i=1;i<n-1;i++){
    if(t[i-1]=='1' && t[i+1]=='1'){
        t[i]='1';
    }
   }

   //count
   int maxi=0;
   for(auto &ch:t){
    if(ch=='1') maxi++;
   }

  // t=s;
   for(int i=1;i<n-1;i++){
    if(t[i-1]=='1' && t[i+1]=='1'){
        t[i]='0';
    }
   }

   int mini=0;
   for(auto &ch:t){
    if(ch=='1') mini++;
   }

   cout<<mini<<" "<<maxi<<endl;

}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}