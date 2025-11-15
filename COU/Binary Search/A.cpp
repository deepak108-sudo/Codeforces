#include<bits/stdc++.h>
using namespace std;
#define int long long
int total=1e9+1;

void solve(){
  int n,m; cin>>n>>m;

    int l=0,r=0;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x<m) l++;
        else if(x>m) r++;
    }

    cout<<((r>l) ? (m+1) : (m-1))<<endl;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}