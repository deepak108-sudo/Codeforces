#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int row,col, a,b;
    cin>>row>>col>>a>>b;

    int TRowCut=ceil(log2((double)row));
    int TColCut=ceil(log2((double)col));

    int opRow=ceil(log2((double)min(a,row-a+1)));
    int opCol=ceil(log2((double)min(b,col-b+1)));

    cout<<min(TRowCut+opCol,TColCut+opRow)+1<<endl;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}