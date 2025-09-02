#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   int n,k; cin>>n>>k;

   map<int,int> mp;
   vector<int> a(n);

   for(int &i:a){
    cin>>i;
    int x=a[i];

    mp[x]++;
   }

   sort(begin(a),end(a));

   //Prefix sum
   vector<int> prefix(n);
   prefix[0]=a[0];
   for(int i=1;i<n;i++){
    prefix[i]=prefix[i]+prefix[i-1];
   }

   int ans=0;
   if(mp.size()==n){
    for(int i=0;i<n;i++){
        if(prefix[i]==k){
            return prefix[i];
        }
        else if(prefix[i]>k){
            return prefix[i]+1;
        }
    }
   }

   //now if duplicate presen

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}