#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<pair<int,int>> task(n);

    for(auto &[x,y]:task) cin>>x>>y;

    double ans=0;
    for(int i=n-1;i>=0;i--){
        ans=max(ans,(double)task[i].first+ans*(1-task[i].second/100.0));
    }
    cout<<fixed<<setprecision(10)<<ans<<endl;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}