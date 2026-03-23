#include<bits/stdc++.h>
using namespace std;
#define int long long
int total=1e9+1;

void solve(){
   int n,h,k; cin>>n>>h>>k;
   vector<int> a(n);
   for(int i=0;i<n;i++){
    cin>>a[i];
   }

   int totalDam=accumulate(begin(a),end(a),0LL);
   int cycle=h/totalDam;
   int ans=(cycle*n)+(cycle)*k;
   h%=totalDam;
   if(h==0) {
        ans-=k;
        cout<<ans<<endl;
        return;
   }

   //Prepare the suffix
   vector<int> suff(n);
   for(int i=n-2;i>=0;i--){
    suff[i]=max(suff[i+1],a[i+1]);
   }

   // cout<<"Yes->"<<h<<endl;
   int mini=INT_MAX,sum=0;
   for(int i=0;i<n;i++){
    mini=min(mini,a[i]);
    suff[i]-=mini;
    suff[i]=max(suff[i],0LL);
   }

   for(int i=0;i<n;i++){
    h-=a[i];
    ans++;
    if(suff[i]>=h) break;
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