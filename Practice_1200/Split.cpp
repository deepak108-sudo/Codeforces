#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,m; cin>>n>>m;
  vector<int> a(n);

  map<int,int> mp; 

  //count the frequency
  for(int &i:a) {
    cin>>i;
    mp[i]++;
  }

  //not possible case
  for(auto &y:mp){
    if(y.second%m!=0){
        cout<<0<<endl;
        return;
    }
  }

  int ans=n;
  for(int i=2;i<n;i++){
      map<int,int> temp=mp;
      for(int j=0;j<n-i+1;j++){
          temp=mp;
          bool f=true;

        for(int k=j;k<j+i;k++){

            temp[a[k]]--;
    
            if((mp[a[k]]-temp[a[k]])>(mp[a[k]]/m)){
                f=false;
                //continue;
            }
        }
        if(f==true) ans++;
    }
  }

  cout<<ans<<endl;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}