#include<bits/stdc++.h>
using namespace std;
//Intution Whether i was able to transport form node 1 to all and node to 1 (Here we will reverse the graph to implement)

void dfs(int node,vector<vector<int>>&graph,vector<int> &vis,vector<int> &closed){
    if(vis[node] || closed[node])   return;

    vis[node]=true;
    for(int nei:graph[node]){ dfs(nei,graph,vis,closed); }
}

void solve(){
    freopen("closing.in", "r", stdin);
	freopen("closing.out", "w", stdout);
    
    int n, m; cin>>n>>m;
    vector<vector<int>> graph(n);
    vector<int> closed(n,0);
    vector<int> vis(n,0);
    
    //Created the graph and reverse Graph
    for(int i=0;i<m;i++){
        int a,b; cin>>a>>b;
        a--,b--; //To make it suitable for 0 based indexing
        
        graph[a].push_back(b);
        graph[b].push_back(a);
      
    }

    //Traversing each graph(land)
    dfs(0,graph,vis,closed);

        //Checking for fully connected
    if(find(begin(vis),end(vis),0)!=vis.end()) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

    //Entering clsoing farm
    unordered_set<int> st;
    for(int i=0;i<n;i++) st.insert(i);

    for(int i=0;i<n-1;i++){
        bool conn=true;
        int a; cin>>a; a--;

        //Simulating the erasing by setting -1
        closed[a]=1;
        st.erase(a);

        //Again erasing all the field and assigning to 0
        fill(begin(vis),end(vis),0);
        //fill(begin(closed),end(closed),0);

        //checking from present are connected or not
        int land=*st.begin();
        dfs(land,graph,vis,closed);

        //Checking
        for(auto x:st){
            if(vis[x]==0) {
                conn=false;
                break;
            }
        }

        cout<<(conn ? "YES" : "NO")<<endl;
    }
}

signed main(){
        solve();
}