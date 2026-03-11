#include<bits/stdc++.h>
using namespace std;
#define int long long
int mod=998244353;
int dp[1002];

int sol(int i,vector<int> &a,vector<int> &b){
    if(i==(int)a.size()){
        return 1;
    }
    if(dp[i]!=-1) return dp[i];

            int ans=0;
            if(a[i-1]<=a[i] && b[i-1]<=b[i]){
                ans+=sol(i+1,a,b);
            }
    
            swap(a[i],b[i]);
            if((a[i-1]<=a[i] && b[i-1]<=b[i])){
                ans+=sol(i+1,a,b);
            }
    
           swap(a[i],b[i]);

       ans%=mod;
       
       return dp[i]=ans;
    }
    
    void solve(){
    memset(dp,-1,sizeof(dp));
   int n; cin>>n;

   vector<int> a(n+1,0);
   vector<int> b(n+1,0);

   int x;
   for(int i=1;i<=n;i++){
        cin>>x;
        a[i]=x;
   }
   for(int i=1;i<=n;i++){
        cin>>x;
        b[i]=x;
   }
   cout<<sol(1,a,b)<<endl;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
    int t; cin>>t;
    while(t--){
        solve();
    }
}