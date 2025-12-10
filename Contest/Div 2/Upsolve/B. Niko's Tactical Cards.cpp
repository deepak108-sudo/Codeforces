#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    vector<int> a(n);
    vector<int> b(n);

    //Taken
    for(int &i:a) cin>>i;
    for(int &i:b) cin>>i;

    int maxS=0,minS=0;
    for(int i=0;i<n;i++){
        //We need to use maxi value in next line so we have taken temporary
        int x=max({maxS-a[i],minS-a[i],b[i]-maxS,b[i]-minS});
        int y=min({maxS-a[i],minS-a[i],b[i]-maxS,b[i]-minS});

        maxS=x;
        minS=y;
    }
    cout<<maxS<<endl;
}
signed main(){
  int t; cin>>t;
  while(t--){
      solve();
  }
}