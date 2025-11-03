#include<bits/stdc++.h>
using namespace std;
vector<int> vis;
vector<vector<int>> flight;

void dfs(int node){
    if(vis[node]==true){
        return;
    }

    vis[node]=true;
    for(int nei:flight[node]){ dfs(nei); }
}

void solve(){
    int n,m; cin>>n>>m;
    flight.resize(n+1);
    //vector<vector<int>> flight(n+1);

    for(int i=0;i<m;i++){
        int a,b; cin>>a>>b;
        flight[a].push_back(b);
        //fship[b].push_back(a);
    }

    for(int i=1;i<=n;i++){
        vis.clear();
        vis.resize(n+1,0);

        dfs(i); //dfs call


        //printing
        // for(int j=1;j<=n;j++){
        //     cout<<vis[j]<<" ";
        // }
        // cout<<endl;


        //checking
        map<int,int> mp;
        for(int j=1;j<=n;j++){
            mp[vis[j]]=j;
        }
        if(mp.size()==2){
            cout<<"NO"<<endl;
            cout<<mp[1]<<" "<<mp[0]<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
}

signed main(){
   
        solve();
}