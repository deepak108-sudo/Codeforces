#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;

    vector<int> a(n);
    for(int &i:a) cin>>i;

    int sum=0;
    for(int i=0;i+1<n;i++){
      sum+=abs(a[i+1]-a[i]);
    }


    int ans=0;
    int mini=INT_MAX;
    for(int i=1;i+1<n;i++){
      mini=min(mini,sum-abs(a[i-1]-a[i])-abs(a[i+1]-a[i])+abs(a[i+1]-a[i-1]));
    }
     //3 4 7 6 7
     //5  (first remove)
     //5  (last remove)
     //6  (middle remove removing idx 1)
     //Mine (5)
     //4 (optimal)
    //All
    int ans2=0;
    for(int i=1;i+1<n;i++){
      ans2+=(abs(a[i]-a[i+1]));
    }

    int ans3=0;
    for(int i=0;i+2<n;i++){
      ans3+=(abs(a[i]-a[i+1]));
    }

    // cout<<endl;
    // cout<<ans<<" "<<ans2<<" "<<ans3<<endl;

    cout<<min({mini,ans2,ans3})<<endl; 
}
signed main(){
  int t; cin>>t;
  while(t--){
      solve();
  }
}