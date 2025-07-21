#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int n,m; cin>>n>>m;

        vector<vector<int>> a(n,vector<int>(m));

        //taken input
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                cin>>a[i][j];

        //directions
        vector<vector<int>> directions={{-1,0},{0,-1},{1,0},{0,1}};

        //Process
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++){
                int p=a[i][j];
                int maxi=1;
                bool f=true;

                for(auto &dir:directions){
                    int i_=i+dir[0];
                    int j_=j+dir[1];

                    if(i_<0 || i_>=n || j_<0 || j_>=m) continue;

                    if(p<=a[i_][j_]) {
                        f=false; 
                        break;
                    }
                    else {
                        maxi=max(a[i_][j_],maxi);
                    }
                }

                if(f) a[i][j]=maxi;
            }

        //print output
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}

        
        
        