#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
   int n; cin>>n;

   vector<int> a(n);
   for(int &i:a) cin>>i;

    int ans=0;
    set<int> prev,next;

    for(int i=0;i<n;i++){
        next.insert(a[i]);
        if(prev.count(a[i])){
            prev.erase(a[i]);
        }

        if(prev.empty()){
            ans++;
            prev=next;
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