#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n; cin>>n;
  vector<int> a(n);
  
  for(int &i:a){
    cin>>i;
  }

  for(int i=0;i<n;i++){
    cout<<(n+1-a[i])<<" ";
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

