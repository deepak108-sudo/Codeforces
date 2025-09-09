#include<bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   string s; 

   cin>>n>>s;
   int ans=0;

   for(char &i:s) if(i=='0') ans++;

   int p=ans;
   for(int i=0;i<p;i++) if(s[i]=='0') ans--;

   cout<<ans<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}