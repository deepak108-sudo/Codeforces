#include<bits/stdc++.h>
using namespace std;

void solve(){
    int k,x; cin>>k>>x;
    int ans=x*(1<<k);
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}

