#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    //Check
    int maxi=a;
    int cnt=1;
    while(cnt<n){
        a=(a+b)%n;
        maxi=max(a,maxi);
        cnt++;
    }
    maxi=max(a,maxi);
    cout<<maxi<<endl;
}
signed main(){
  int t; cin>>t;
  while(t--){
      solve();
  }
}