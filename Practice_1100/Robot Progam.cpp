#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n,x,k; cin>>n>>x>>k;
    string s; cin>>s;

    ll cnt=0;

    ll ans=0;
    
    for(int i=0;i<n;i++){
       // cout<<ans<<endl;
        x+=(s[i]=='L' ? -1 : +1);
        --k;
        if(x==0){
            ans=1;
            break;
        }
    }

    if(x==0){
        for(int i=0;i<n;i++){
            x+=(s[i]=='L' ? -1 : +1);
            if(x==0){
                ans+=(k/(i+1));
                break;
            }  
        }
    }
    cout<<ans<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}