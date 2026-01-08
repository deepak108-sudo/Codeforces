#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,q; cin>>n>>q;
    vector<int> a(n);
    for(int &i:a) cin>>i;

    vector<pair<int,int>> qr(q);

    for(int i=0;i<q;i++){
        cin>>qr[i].first;
        cin>>qr[i].second;
        // qr[i].first-=1;
        // qr[i].second-=1;
    }

    //prefix sum
    vector<int> pre(n+1);
    pre[0]=0;
    pre[1]=a[0];

    for(int i=2;i<=n;i++){
        pre[i]=pre[i-1]+a[i-1];
    }

    //Answer time
    for(auto &p:qr){
        cout<<pre[p.second]-pre[p.first-1];
        cout<<endl;
    }
}