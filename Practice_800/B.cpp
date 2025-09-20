#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
  int n; cin>>n;

  int t=2*n;
  vector<int> a(t);

  int cnt=1;
  for(int i=n;i<2*n;i++){
    a[i]=cnt;
    cnt++;
  }

  cnt=n-1;
  int j=0;
  for(;j<n-1;j++){
    a[j]=cnt;
    cnt--;
  }
  a[j]=n;

  //print
  for(int i=0;i<2*n;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}