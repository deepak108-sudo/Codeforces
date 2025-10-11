#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
   int n; cin>>n;

   map<int,int> mp; int x;
   for(int i=0;i<n;i++){
        cin>>x;
        mp[x]++;
   }

   //Traverse
   for(auto it:mp){
    if(it.second>2){
        mp[it.first+1]+=it.second-2;
    }
    if(it.second==1){
        cout<<"NO"<<endl;
        return;
    }
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