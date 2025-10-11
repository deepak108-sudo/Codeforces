#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
   int n; cin>>n;

   vector<int> a(n);
   for(int &i:a) cin>>i;

   int maxi=*max_element(begin(a),end(a));

   vector<int> odd,even;
   for(int &i:a){
    if(i==maxi) continue;
    i%2==0 ?  even.push_back(i) : odd.push_back(i);
   }

   int sumO=accumulate(begin(odd),end(odd),0);
   int sumE=accumulate(begin(even),end(even),0);

   int mx=max(sumO,sumE);

   if(mx%2==0){
          
   }


}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}