#include<bits/stdc++.h>
using namespace std;
int n,m;
const int MAXN=1001;
char grid[MAXN][MAXN];
int vis[MAXN][MAXN];

void floodFill(int r,int c){
    stack<pair<int,int>> st;
    st.push({r,c});

    while(!st.empty()){
        int r=st.top().first;
        int c=st.top().second;
        st.pop();

         if(r<0 || r>=n || c<0 || c>=m || grid[r][c]=='#' || vis[r][c]) continue;
        vis[r][c]=true;

        st.push({r,c+1});
        st.push({r,c-1});
        st.push({r+1,c});
        st.push({r-1,c});
    }
}

void solve(){
    memset(vis,0,sizeof(vis));
    cin>>n>>m;

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
                floodFill(i,j);
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