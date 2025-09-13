#include<bits/stdc++.h>
using namespace std;
#define int long long

int p=0;
int good(int x){
    int ans=0;

    for(int i=0;i<x;i++){
        if(i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0){
            ans++;
        }
    }

    return ans;
}

int countGood(int t){
    int period=2*3*5*7; //210
    int fullCycle=t/period;
    int remain=t%period;

    int ans=good(period)*fullCycle+good(remain);
    return ans;
}

void solve(){
   int l,r; cin>>l>>r;

   //precompute total good from 0 to 210

   cout<<countGood(r+1)-countGood(l)<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}