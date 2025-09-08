#include<bits/stdc++.h>
using namespace std;

void solve(){
   int a,b; cin>>a>>b;
    if(a==b){
        cout<<0<<endl;
        return;
    }

   int lcm=(a*b)/__gcd(a,b);
//    cout<<lcm<<endl;
//    return;

   if(lcm!=a && lcm!=b){
    cout<<2<<endl;
   }
   else{
    cout<<1<<endl;
   }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}

