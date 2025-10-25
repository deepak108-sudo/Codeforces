#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,q; cin>>n>>q;
    vector<int> prefix(n,0);

    cin>>prefix[0];
    for(int i=1;i<n;i++){
        int x; cin>>x;
        prefix[i]=prefix[i-1]+x;
    }

    //process query
    for(int i=0;i<q;i++){
        int l,r; cin>>l>>r;
        
        if(l==0) cout<<prefix[r-1]<<endl;
        else cout<<prefix[r-1]-prefix[l-1]<<endl;
    }
}