#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k; cin>>n>>k;
    vector<int> a(n);
    for(int &i:a) cin>>i;

    sort(begin(a),end(a));

    int medI=(n/2);
    int ans=a[medI];

    while(true){
        int l=medI,r=n-1;
        int mid=l+(r-l)/2;

        int idx=upper_bound(begin(a)+l,end(a),a[medI])-begin(a);

        if(k<(idx-medI)) break;
        ans++;
    }
    cout<<ans<<endl;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    while(t--){
        solve();
    }
}