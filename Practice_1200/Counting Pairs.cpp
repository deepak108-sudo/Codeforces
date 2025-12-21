#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
   int n,x,y; cin>>n>>x>>y;

   vector<int> a(n);
   for(int &i:a) cin>>i;
    int ans=0;

    sort(begin(a),end(a));
    int sum=accumulate(begin(a),end(a),0LL);

    for(int i=0;i<n;i++){
        int X=sum-y-a[i];
        int Y=sum-x-a[i];

        int lower=lower_bound(begin(a),begin(a)+i,X)-begin(a);
        int upper=upper_bound(begin(a),begin(a)+i,Y)-begin(a);

        ans+=(upper-lower);
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