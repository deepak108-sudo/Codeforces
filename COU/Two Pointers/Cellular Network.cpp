#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int n,m; cin>>n>>m;
    vector<int> cities(n),towers(m);

    for(int i=0;i<n;i++) cin>>cities[i];
    for(int i=0;i<m;i++) cin>>towers[i];

    int ans=0;
    int r=0,l=0;
    for(int x:cities){
        while(r+1<m && towers[r]<x)
            r++; 

        if(r!=0) l=r-1;

        ans=max(ans,min(abs(towers[r]-x),abs(towers[l]-x)));
        
    }
    cout<<ans<<endl;
}