#include<bits/stdc++.h>
using namespace std;
#define int long long

void dfs(int v,vector<int> &subDp,vector<vector<int>> &com,vector<bool> &vis){
    vis[v]=true;

    int ans=0;
    for(auto x:com[v]){
        if(vis[x]!=true){
            dfs(x,subDp,com,vis);
           ans+=1+subDp[x]; 
        }
    }

    subDp[v]=ans;
}
void solve(){
   int n; cin>>n;
   vector<vector<int>> com(n+1); //n+1 becoz i am ignoring 0
   
   int emp=2;
   for(int i=0;i<n-1;i++){
        int boss; cin>>boss;
        com[boss].push_back(emp);
        emp++;
   }

   //Traverse and fill subordinate dp
   vector<int> subDp(n+1);
   vector<bool> vis(n+1);

   //Call iteratively and find their subordinate
   dfs(1,subDp,com,vis);

   //Now print the subOrdinate
   for(int i=1;i<=n;i++){
    cout<<subDp[i]<<" ";
   }
   cout<<endl;

}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    while(t--){
        solve();
    }
}