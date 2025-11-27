#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m; cin>>n>>m;
    vector<vector<char>> grid(n,vector<char>(m));

    //Taken input
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }
    //Check for valid index
    auto valid=[&](int x,int y){
        return x>=0 && x<n && y>=0 && y<m;
    };

    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,-1,1};
    //Mark neighbour to block area that is #
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]=='B'){
                //Traverse on all four direction
                for(int k=0;k<4;k++){
                    int i_=i+dx[k];
                    int j_=j+dy[k];
    
                    if(valid(i_,j_)){
                        if(grid[i_][j_]=='G'){
                            cout<<"NO"<<endl;//early exit
                            return;
                        }
                        if(grid[i_][j_]=='.') grid[i_][j_]='#'; 
                    }
                }
            }
        }
    }

    //Now apply bfs from last cell
    vector<vector<int>> vis(n,vector<int>(m,0));
    queue<pair<int,int>> q;

    if(grid[n-1][m-1]!='#'){
        q.push({n-1,m-1});
        vis[n-1][m-1]=1;
    } 
    while(!q.empty()){
        auto [i,j]=q.front();
        q.pop();

        for(int k=0;k<4;k++){
            int i_=i+dx[k];
            int j_=j+dy[k];

            if(valid(i_,j_) && grid[i_][j_]!='#' && !vis[i_][j_]){
                vis[i_][j_]=1;
                q.push({i_,j_});
            }
        }
    }

    //Now check each good person can escape and each bad can not escape with help of visited
    bool ok=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]=='G' && vis[i][j]==0) ok=false;
            else if(grid[i][j]=='B' && vis[i][j]==1) ok=false;
        }
    }

    cout<<((ok) ? "YES": "NO")<<endl; 
}
signed main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}