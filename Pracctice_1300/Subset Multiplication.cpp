#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int ans=1;
    for(int i=0;i<n-1;i++){
        if(a[i+1]%a[i]!=0){
            int hcf=gcd(a[i],a[i+1]);
            ans=lcm(ans,a[i]/hcf);
        }
    }

    cout<<ans<<endl;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}