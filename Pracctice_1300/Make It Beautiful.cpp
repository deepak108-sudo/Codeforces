#include<bits/stdc++.h>
using namespace std;
#define int long long
int total=1e9+1;

void solve(){
  int n,k; cin>>n>>k;
  
  //taking input
  int onesBit=0;
  vector<int> bits(32,0);
  for(int i=0;i<n;i++){
    int x; cin>>x;

    for(int i=0;i<32;i++){
      if((x&(1LL<<i))==0) bits[i]++;
      else onesBit++;
    }
  }

  //print
  // for(auto &c:bits) cout<<c<<" ";
  // cout<<"-----"<<onesBit<<"-----"<<endl;

  //calculate
  int sum=0;
  for(int i=0;i<32;i++){
    int kReq=bits[i]*(1LL)*pow(2,i);

      sum+=min(k,kReq);
      k-=min(k,kReq);

    if(k<=0) break;
  }
  cout<<onesBit+sum<<endl;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}