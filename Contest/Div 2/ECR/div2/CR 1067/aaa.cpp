#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
   int n; cin>>n;
   int y,r; cin>>y>>r;
   y/=2;

   cout<<min(y+r,n)<<endl;

//    int temp=n;

//    temp-=r;
//    temp-=(y);

//    if(temp<0){
//     cout<<n<<endl;
//     return;
//    }
//    cout<<n;
//    cout<<endl;

}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}