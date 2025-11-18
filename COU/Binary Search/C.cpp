#include<bits/stdc++.h>
using namespace std;
#define int long long
int total=1e9+1;

void solve(){
   int n; cin>>n;
   vector<int> a(n);

    int sum=0,ans=0;
    int mx_val=0;
    for(int i=1;i<=n;i++){
        mx_val=max(mx_val,-1*i*i+i+sum);
        cin>>a[i-1]; sum+=a[i-1];
        ans=max(ans,i*i+i-sum+mx_val);
    }
    
    cout<<ans+sum<<endl;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}