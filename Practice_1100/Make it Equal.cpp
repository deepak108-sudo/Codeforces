#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k; cin>>n>>k;

   map<int,int> mp;
   int x;

   //Taken first input
   for(int i=0;i<n;i++){
    cin>>x;
    mp[x%k]++;
   }

   //Taken second input
   int t=1;
   for(int i=0;i<n;i++){
    cin>>x;
    if(mp[x%k]) mp[x%k]--;
    else if(mp[k-(x%k)]) mp[k-(x%k)]--;
    else{
        t=0;
    } 
   }

   //final result
   if(t==1) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}