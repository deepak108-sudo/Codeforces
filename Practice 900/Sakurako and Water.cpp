#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        //Taking input
        vector<vector<int>> a(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }

        unordered_map<int,int> mp;


        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int d=i-j;

                if(!mp.count(d)){
                    mp[d]=a[i][j];
                }
                else{
                    mp[d]=min(mp[d],a[i][j]);
                }
            }
        }

        //Process
        int ans=0;
        for(auto it:mp){
            int val=it.second;
            if(val<0) ans+=(-val);
        }

        cout<<ans<<endl;
    }
}