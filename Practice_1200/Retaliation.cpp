#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
   int n; cin>>n;

   vector<int> a(n);
   for(int &i:a) cin>>i;

    //operations
    if((2*a[0]-a[1])%(n+1)!=0){
        cout<<"NO"<<endl;
        return;
    }

    //Derived
    int y=(2*a[0]-a[1])/(n+1);
    int x=a[0]-n*y;

    if(y<0 || x<0){
        cout<<"NO"<<endl;
        return;
    }

    for(int i=1;i<=n;i++){
        if(a[i-1]-(x*i)-(n-i+1)*y != 0){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}