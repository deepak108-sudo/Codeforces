#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    vector<int> a(n);

    for(int &i:a) cin>>i;

    vector<int> ans(n);
    ans[0]=1;
    int inc=2;
    for(int i=1;i<n;i++){
        int key=a[i]-a[i-1];
        int j=i;
        j-=key;

        if(j<0){
            ans[i]=inc;
            inc++;
        }
        else{
            ans[i]=ans[j];
        }
    }

    //print
    for(int &i:ans) cout<<i<<" ";
    cout<<endl;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}

