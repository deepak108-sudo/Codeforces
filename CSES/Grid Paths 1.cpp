#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int ans=0;
vector<vector<int>> dirs{{0,1},{1,0}};
void dfs(int i,int j,vector<vector<char>> &grid){
    int n=grid.size();
    if(i==n-1 && j==n-1){
        ans++;
        return;
    }
    if(i>=n || j>=n){
        return;
    }

    for(auto dir:dirs){
        int i_=i+dir[0];
        int j_=j+dir[1];

        if(i_<0 || i_>n-1 || j_<0 || j_>n-1 || grid[i_][j_]=='*') continue;

        grid[i_][j_]='*';
        dfs(i_,j_,grid);
        grid[i_][j_]='.';
    }
}

int main(){
     //Taken input
     int n; cin>>n;

     vector<vector<char>> grid(n,vector<char>(n));

     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
     }

     //base case
     if(grid[0][0]=='*'){
        cout<<0;
        return 0;
     }

     dfs(0,0,grid);
     cout<<ans<<endl;
     return 0;
}