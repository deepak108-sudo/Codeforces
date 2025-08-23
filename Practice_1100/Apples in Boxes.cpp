#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k; cin>>n>>k;
    
    vector<int> a(n);
    for(int &i:a) cin>>i;
    long long sum=accumulate(begin(a),end(a),0);

    sort(begin(a),end(a));
    a[n-1]--;
    sort(begin(a),end(a));

    if(a[n-1]-a[0]>k || sum%2==0){
        cout<<"Jerry"<<endl;
        return;
    }
    cout<<"Tom"<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}

