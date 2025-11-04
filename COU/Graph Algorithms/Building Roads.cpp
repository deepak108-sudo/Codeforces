#include<bits/stdc++.h>
using namespace std;
vector<int> vis;
vector<vector<int>> graph;
pair<int,int> p;

void dfs(int city){
    if(vis[city]) return;
    vis[city]=1;
    for(auto &nei:graph[city]) { dfs(nei); }
}

void solve(){
    int n,m; cin>>n>>m;
    vis.resize(n,0);
    graph.resize(n);
    vector<int> newRoads;

    //connect the city
    for(int i=0;i<m;i++){
        int a,b; cin>>a>>b; a--,b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    int connected=0;
    for(int i=0;i<n;i++){
        if(vis[i]!=0) continue; //play vital role
        newRoads.push_back(i+1);
        connected++;
        dfs(i);
    }

    //Print the conncted component
    cout<<connected-1<<endl;

    //print all roads
    for(int i=1;i<(int)newRoads.size();i++){
        cout<<newRoads[0]<<" "<<newRoads[i]<<endl;
    }
}

signed main(){
        solve();
}