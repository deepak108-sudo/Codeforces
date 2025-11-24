#include<bits/stdc++.h>
using namespace std;

int n;
#define f(i, n) for (int i = 0; i < (n); i++)

vector<vector<bool>> vis;
vector<vector<char>> grid;
int x[]={-1,1,0,0};
int y[]={0,0,-1,1};

int peri=INT_MIN,area=INT_MIN;
int currA=0,currP=0;

void dfs(int i,int j,int n){
    vis[i][j]=true;
    if(grid[i][j]=='#') currA++;
 
    for(int d=0;d<4;d++){
        int i_=i+x[d];
        int j_=j+y[d];

        if(i_<0 || i_>n-1 || j_<0 || j_>n-1) {
            currP++;
            continue;
        }
        if(grid[i_][j_]=='.') currP++;
        else {
            if(vis[i_][j_]!=true)
            dfs(i_,j_,n);
        }
    }
}


void solve(){
    cin>>n;
    vis.assign(n,vector<bool>(n,0));
    grid.assign(n,vector<char>(n));
    f(i,n) f(j,n)
        cin>>grid[i][j];

    f(i,n) f(j,n)
            {
                if(grid[i][j]=='#' && vis[i][j]!=true){
                    currA=0,currP=0;
                    dfs(i,j,n);
                    if(area==currA){
                        peri=min(peri,currP);
                    }
                    else{
                        area=max(area,currA);
                        peri=max(peri,currP);
                    }
                  
                }
            }

            cout<<area<<" "<<peri<<endl;
}

signed main(){
    freopen("perimeter.in", "r", stdin);
	freopen("perimeter.out", "w", stdout);
        solve();
}