#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
   int n,m,h; cin>>n>>m>>h;
   vector<int> a(n); //O(n)
   for(int i=0;i<n;i++) cin>>a[i];

   //entering queries
   vector<pair<int,int>> qr(m); //O(m)
   for(int i=0;i<m;i++){
    cin>>qr[i].first;
    cin>>qr[i].second;
   }

   map<int,int> mp;
   map<int,int> empty;
   

   int mx=*max_element(begin(a),end(a));    //O(n)
   int mxx=mx;
   
   //Traversing queries
   for(auto &p:qr){ //O(m)
        int idx=p.first-1;
        int val=p.second;

        if(!mp.count(idx))  //O(log(n))
            mp[idx]=a[idx]+val;
        else   
            mp[idx]=mp[idx]+val;

        mx=max(mx,mp[idx]);

        // for(auto p:mp){
        //     cout<<p.second<<" ";
        // }
        
        if(mx>h){
            mp.swap(empty);  //clear whole map in O(1) time
            empty.clear();
            mx=mxx;
        }
   }

   //Now traversing and getting the result
   for(int i=0;i<n;i++){
    if(mp.count(i)){
        cout<<mp[i]<<" ";
    }
    else{
        cout<<a[i]<<" ";
    }
   }
   cout<<endl;

}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}