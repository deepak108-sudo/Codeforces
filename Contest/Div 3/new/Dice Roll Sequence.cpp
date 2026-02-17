#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(int &i:a) cin>>i;

    //time to answer
    int ans=0;
    for(int i=1;i<n;i++){
        if((a[i]+a[i-1]==7) || (a[i]==a[i-1])){
            a[i]=10;
            ans++;
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

