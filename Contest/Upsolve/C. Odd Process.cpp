#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    vector<int> a(n);
    vector<int> o,e;
   
   for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]&1) o.push_back(a[i]);
        else e.push_back(a[i]);
   }

   sort(e.begin(),e.end());
   sort(o.begin(),o.end());

   //All odd
   if(o.size()==n){
    for(int k=1;k<=n;k++){
        if(k&1) cout<<o.back()<<" ";
        else cout<<0<<" ";
    }
    cout<<endl;
    return;
   }

   //All even
   if(e.size()==n){
    for(int k=1;k<=n;k++){
        cout<<0<<" ";
    }
    cout<<endl;
    return;
   }

   //For combination
   vector<int> ans(n+1);
   ans[1]=o.back();
   for(int k=2;k<=n;k++){
    if(e.size()==0){
        ans[k]=ans[k-2];
    }
    else{
        ans[k]=ans[k-1]+e.back();
        e.pop_back();
    }
   }

   if(accumulate(a.begin(),a.end(),0LL)&1^1){   //if even(new technique to check even)
    ans[n]=0;
   }

   //Print
   for(int k=1;k<=n;k++){
    cout<<ans[k]<<" ";
   }
   cout<<endl;
    
}
signed main(){
  int t; cin>>t;
  while(t--){
      solve();
  }
}