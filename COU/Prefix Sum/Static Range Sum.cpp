#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,q; cin>>n>>q;
    vector<int> a(n);

    for(int &i:a) cin>>i;

    vector<int> p(n,0);
    p[0]=a[0];
    for(int i=1;i<n;i++){
        p[i]=p[i-1]+a[i];
    }

    //now process the query
    for(int i=0;i<q;i++){
        int l,r; cin>>l>>r;

        if(l==0){
            cout<<p[r-1]<<endl;
            continue;
        }
        cout<<p[r-1]-p[l-1]<<endl;
    }
}