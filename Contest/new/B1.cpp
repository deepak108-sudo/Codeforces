#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n; cin>>n;
    vector<int> a(n);
    int cnt=0;
    int one=0;


    for(int &i:a) {
        cin>>i;
        if(i==0) cnt++;
        if(i==1) one++;
    
    }

    if(cnt==0 || cnt==n){
        cout<<"NO"<<endl;
        return;
    }

    if(one==0 && cnt>=2){
        cout<<"NO"<<endl;
        return;
    }

    cout<<"YES"<<endl;

}
signed main(){
  int t; cin>>t;
  while(t--){
      solve();
  }
}