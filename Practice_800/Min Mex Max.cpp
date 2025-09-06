#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    set<int> s(begin(a),end(a));

    s.erase(-1);
    if(s.size()<=1 && !s.count(0)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}