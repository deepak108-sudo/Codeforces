#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<vector<int>> vis;
vector<vector<char>> grid;

void floodFill(int r,int c,char dot){
    if(r<0 || r>=n || c<0 || c>=m || vis[r][c]==true || grid[r][c]!=dot) return;

    vis[r][c]=true;

    floodFill(r,c+1,dot);
    floodFill(r,c-1,dot);
    floodFill(r+1,c,dot);
    floodFill(r-1,c,dot);
}

void solve(){
    cin>>n>>m;
    vis.resize(n,vector<int>(m,0));
    grid.resize(n,vector<char>(m));

    //taking input
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }


    
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j] && grid[i][j]=='.'){
                ans++;
                floodFill(i,j,'.');
            }
        }
    }

    cout<<ans<<endl;
}

signed main(){
    int t=1;
    while(t--){
        solve();
    }
}