#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //Finding middle element from second elem. to last second
    vector<int> ans(n);
    for(int i=1;i<n-1;i++){
        ans[i]=(a[i-1]-2*a[i]+a[i+1])/2;
    }

    //Now its time to last and first element
    ans[0]=(a[1]-a[0]+(a[0]+a[n-1])/(n-1))/2;
    ans[n-1]=ans[0]-a[1]+a[0]-(accumulate(begin(ans)+1,end(ans)-1,0));

    //Now print the result
    for(auto &num:ans) cout<<num<<" ";
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

