#include<bits/stdc++.h>
using namespace std;
#define int long long

int mod=1e9+7;

signed main(){
     //Taken input
    int n; cin>>n;
    int res=1;
    for(int i=0;i<n;i++){
        res=(res*2)%mod;
    }

    cout<<res;
}