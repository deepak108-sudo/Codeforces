#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> direction={{-1,0},{0,-1},{1,0},{0,1},{1,1},{-1,1},{1,-1},{-1,-1}};

bool dfs(int kx,int ky,vector<vector<int>> &vis,int n,int tx,int ty){
    vis[kx][ky]=1;

    if(kx==tx && ky==ty){
        return true;
    }

    for(auto &dir:direction){
        int kx_=kx+dir[0];
        int ky_=ky+dir[1];

        if(kx_>=1 && kx_<n && ky_>=1 && ky_<n && !vis[kx_][ky_]){
            if(dfs(kx_,ky_,vis,n,tx,ty))
                return true;
        }  
    }

    return false;
}

int main(){
    int n; cin>>n;
    n+=1;
    int qx,qy; cin>>qx>>qy;
    int kx,ky; cin>>kx>>ky;
    int tx,ty; cin>>tx>>ty;

    vector<vector<int>> vis(n,vector<int>(n,0));

    vis[qx][qy]=1;
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){

            if(i==qx || j==qy || (i+j == qx+qy) || (i-j == qx-qy)){
                vis[i][j]=1;
            }

        }
    }

    bool ans= dfs(kx,ky,vis,n,tx,ty);

    if(ans==true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}