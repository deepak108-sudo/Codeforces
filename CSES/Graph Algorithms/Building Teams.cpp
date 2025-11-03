#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m; cin>>n>>m;
    vector<vector<int>> fship(n+1);

    for(int i=0;i<m;i++){
        int a,b; cin>>a>>b;
        fship[a].push_back(b);
        fship[b].push_back(a);
    }

    vector<int> team(n+1,-1);
    queue<int> q;
    
    
    //Iterating each
    for(int i=1;i<=n;i++){
        if(team[i]!=-1) continue;
        q.push(i);
        team[i]=1;

        while(!q.empty()){
            int node=q.front(); q.pop();

            for(auto &nei:fship[node]){
                if(team[nei]==-1){
                    team[nei]=3-team[node];
                    q.push(nei);
                }
                else if(team[nei]==team[node]){
                    cout<<"IMPOSSIBLE"<<endl;
                    return;
                }
            }
        }
    }

    //Print
    for(int i=1;i<=n;i++){
        cout<<team[i]<<" ";
    }
    
}

signed main(){
   
        solve();
}