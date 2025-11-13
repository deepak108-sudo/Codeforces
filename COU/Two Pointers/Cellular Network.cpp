#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int n,m; cin>>n>>m;
    vector<ll> cities(n),towers(m+2);
    towers[0]=-1e18,towers[m+1]=1e18;

    for(int i=0;i<n;i++) cin>>cities[i];
    for(int i=1;i<=m;i++) cin>>towers[i];

    ll ans=0;
    for(int i=0;i<n;i++){
        int right=lower_bound(begin(towers),end(towers),cities[i])-begin(towers);

        int left=right-1;

        ans=max(ans,min(cities[i]-towers[left],towers[right]-cities[i]));
    }
    cout<<ans<<endl;
}