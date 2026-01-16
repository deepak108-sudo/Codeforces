#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
   int n; cin>>n;

   vector<int> a(n);
   for(int &i:a) cin>>i;

    vector<int> res(n);
    res[0]=1;

    for(int i=1;i<n;i++){
        int diff=a[i]-a[i-1];
        int ans=res[i-1];
        if(diff>res[i-1]) res[i]=++ans;
        else if(diff==res[i-1]) res[i]=--ans;
        else res[i]=ans;
    }

    for(int i=0;i<n;i++) cout<<res[i]<<" ";
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