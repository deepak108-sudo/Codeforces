#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
   int n,k; cin>>n>>k;
   vector<int> a(n);

   for(int &i:a) cin>>i;

   int cnt=1;
   bool f=false;
   if(n==k){
    for(int i=1;i<n;i+=2){
        if(a[i]!=cnt){
            f=true;
            cout<<cnt<<endl;
            return;
        }
        cnt++;
    }
    if(f==false) cout<<cnt<<endl;
   }
   else{
    int i;
    for(i=1;i<n-k+1;i++){
        if(a[i]!=1){
            cout<<1<<endl;
            return;
        }
    }

    if(a[i]!=1){
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
    }
    return;
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