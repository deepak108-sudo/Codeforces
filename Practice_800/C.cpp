#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
  int n; cin>>n;
  string s; cin>>s;

  vector<int> a(n-1);

  for(int i=0;i<n-1;i++){
    a[i]=(s[i]-'0')+(s[i+1]-'0');
  }

    n-=1;



    int i=0;
    while(i<n && a[i]==2) i++;

    while(i<n && a[i]<=1) i++;

    while(i<n && a[i]==2) i++;

    if(i==n){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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