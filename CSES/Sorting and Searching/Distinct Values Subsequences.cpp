#include<bits/stdc++.h>
using namespace std;
#define int long long

int mod=1e9+7;
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    
    int x;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>x;
        mp[x]++;
    }

    //now calculate ans
    int ans=1;
    for(auto &p:mp){
        ans*=(p.second+1);
        ans%=mod;
    }
    cout<<ans-1;
}