#include<bits/stdc++.h>
using namespace std;

void solve(){
   int n; cin>>n;

   vector<int> a(n);
   for(int &i:a) cin>>i;

   unordered_map<int,int> mp;
   for(int &i:a) mp[i]++;

   int l=-1,r=-1,cnt=0,maxi=0;
   for(int i=0;i<n;i++){
        if(mp[a[i]]==1){
            cnt++;
        }
        else{
            cnt=0;
        }
        if(maxi<cnt){
            r=i;
            l=i-cnt+1;

            maxi=cnt;
        }
   }

   //all are equal i.e [1,1,1,1]
   if(maxi==0) cout<<0<<endl;
   else{
    cout<<l+1<<" "<<r+1<<endl;
   }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}