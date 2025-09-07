#include<bits/stdc++.h>
using namespace std;

void solve(){
    int k,x; cin>>k>>x;

    long long res=x;
    for(int i=1;i<=k;i++){
        res*=2;
    }
    cout<<res<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}

