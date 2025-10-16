#include<bits/stdc++.h>
using namespace std;
#define int long long
int total=1e9+1;

void solve(){
   int n; cin>>n;
   vector<int> a(n);
   vector<int> b(n);

   //taking input
   for(int &i:a) cin>>i;
   for(int &i:b) cin>>i;

   //sort first array with bubble sort
   vector<pair<int,int>> swaps;
  for(int step=0;step<n-1;step++){
    for(int i=0;i<n-step-1;i++){
        if(a[i]>a[i+1]){
            swap(a[i],a[i+1]);
            swaps.push_back({1,i+1});
        }
    }
  }

  //sort second array with bubble sort
  for(int step=0;step<n-1;step++){
    for(int i=0;i<n-step-1;i++){
        if(b[i]>b[i+1]){
            swap(b[i],b[i+1]);
            swaps.push_back({2,i+1});
        }
    }
  }

  //Now sort 2 different array  
  for(int i=0;i<n;i++){
    if(a[i]>b[i]){
        swap(a[i],b[i]);
        swaps.push_back({3,i+1});
    }
  }

   //print
   cout<<swaps.size()<<endl;
   for(auto &i:swaps) cout<<i.first<<" "<<i.second<<endl;

    // for(int &i:a) cout<<i<<" ";
    // cout<<endl;
    // for(int &i:b) cout<<i<<" ";
    // cout<<endl;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}