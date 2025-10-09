#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
   int n; cin>>n;

   cout<<2*n-1<<endl;
   cout<<1<<" "<<1<<" "<<n<<endl;
    int r=n-1;
    int l=n;
    int seq=2;
    int key=0;
   while(l>1){

        if(key<1){
            cout<<seq<<" "<<1<<" "<<r<<endl;
            key++;
            r--;
        }
        else{
            cout<<seq<<" "<<l<<" "<<n<<endl;
            l--;
            key--;
            seq++;
        }
   }
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}