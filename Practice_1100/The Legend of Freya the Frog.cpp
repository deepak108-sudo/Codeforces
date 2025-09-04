#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   int x,y,k; cin>>x>>y>>k;

   int x_jumps=(x+k-1)/k;
   int y_jumps=(y+k-1)/k;

   cout<<max(2*x_jumps-1,2*y_jumps)<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}