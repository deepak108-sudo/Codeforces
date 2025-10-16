#include<bits/stdc++.h>
using namespace std;
#define int long long
int total=1e9+1;

void solve(){
   int n,l,r,k; cin>>n>>l>>r>>k;

   if(n&1==1){
    cout<<l<<endl;
    return;
   }
   else if(n==2){
    cout<<-1<<endl;
   }
   else{
        int first=l;
        int power=log2(l);
        power+=1;
        int second=pow(2,power);

        if(second>r){
            cout<<-1<<endl;
            return;
        }

        if(k<=n-2){
            cout<<first<<endl;
        }
        else{
            cout<<second<<endl;
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