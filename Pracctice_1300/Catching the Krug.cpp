#include<bits/stdc++.h>
using namespace std;
#define int long long
int total=1e9+1;

void solve(){
   int n,rowKrug,colKrug,rowDron,colDron;
   cin>>n>>rowKrug>>colKrug>>rowDron>>colDron;

   int ans=0;
   if(rowKrug<rowDron){
    ans=max(ans,rowDron);
   }
   else if(rowKrug>rowDron){
    ans=max(ans,n-rowDron);
   }

   //col max
   if(colKrug<colDron){
    ans=max(ans,colDron);
   }
   else if(colKrug>colDron){
    ans=max(ans,n-colDron);
   }

   cout<<ans<<endl;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}