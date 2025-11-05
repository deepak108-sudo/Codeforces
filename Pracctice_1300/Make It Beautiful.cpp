#include<bits/stdc++.h>
using namespace std;
#define int long long
int total=1e9+1;

void solve(){
  int n,k; cin>>n>>k;
  
  //taking input
  int onesBit=0;
  vector<int> a(n);
  for(int &i:a){
    cin>>i;
    onesBit+=__builtin_popcount(i);
  }

  //checking each bit
  for(int i=0;i<=60;i++){
    int placeVal=(1LL<<i);
    for(int val:a){
      if(!(val & placeVal) && k>=placeVal){
        onesBit++;
        k-=placeVal;
      }
    }
  }

  //print output
  cout<<onesBit<<endl;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}