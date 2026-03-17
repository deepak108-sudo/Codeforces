#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    vector<int> a(n);

    priority_queue<pair<int,int>> pq;
    int x;
   for(int i=0;i<n;i++){
    cin>>x;
    pq.push({x,i});
   }

   int cnt=0;
   int mini=n-1;
   while(!pq.empty() && a[0]!=-1){
   // cnt++;
   while(pq.top().second>mini){
    pq.pop();
   }

   auto p=pq.top();

    pq.pop();
    mini=min(mini,p.second);

    int index=p.second;
    a[index]=-1;
    cnt++;
   }

   cout<<cnt<<endl;

   
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}