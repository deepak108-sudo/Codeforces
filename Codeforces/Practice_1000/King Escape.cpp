#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> direction={{-1,0},{0,-1},{1,0},{0,1},{1,1},{-1,1},{1,-1},{-1,-1}};

void dfs(int kx,int ky,vector<vector<int>> vis,int n){
    vis[kx][ky]=1;

    for(auto &dir:direction){
        int kx_=kx+dir[0];
        int ky_=ky+dir[1];

        if(kx_>=0 && kx_<n && ky_>=0 && ky_<n && !vis[kx_][ky_])  
    }

}

int main(){
    int n;
    int qx,qy; cin>>qx>>qy;
    int kx,ky; cin>>kx>>ky;
    int tx,ty; cin>>tx>>ty;

    vector<vector<int>> vis(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==qx || j==qy || (i<n && j<n && i==(qx+1) && j==(qy+1)) || (i==qx-1) )
        }
    }

    dfs(kx,ky,vis,n)
}