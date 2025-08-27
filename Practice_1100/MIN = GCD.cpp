#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n; cin>>n;
    vector<ll> a(n);

    for(ll &i:a) cin>>i;

    int mi=min_element(begin(a),end(a))-begin(a);

    ll g=0;
    for(int i=0;i<n;i++){
        if(mi!=i && a[i]%a[mi]==0){
            g=__gcd(g,a[i]);
        }
    }

    if(g==a[mi]) cout<<"YES";
    else
        cout<<"NO";
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}

