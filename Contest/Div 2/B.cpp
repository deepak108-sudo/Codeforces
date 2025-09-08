#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
   int n,m; cin>>n>>m;
   vector<int> a(n);

   for(int &i:a) cin>>i;

   int ans=0;
   sort(begin(a),end(a));
   if(m>=n){
    int cnt=(m-(n-1));
    ans+=cnt*a[0];
    cnt++;

    int i=1;
    while(i<n){
        ans+=(cnt*a[i]);
        cnt++;
        i++;
    }
   }
   else{
    int i=n-m;

    int cnt=1;
    while(i<n){
        ans+=(cnt*a[i]);
        cnt++;
        i++;
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

