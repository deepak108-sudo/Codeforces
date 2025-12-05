#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    freopen("haybales.in","r",stdin);
    freopen("haybales.out","w",stdout);
    int n,m; cin>>n>>m;

    vector<int> pora(n);
    for(int &i:pora) cin>>i;

    sort(begin(pora),end(pora));

    for(int i=0;i<m;i++){
        int q_start;
        int q_end;
        cin>>q_start>>q_end;

        cout<<upper_bound(begin(pora),end(pora),q_end)-lower_bound(begin(pora),end(pora),q_start)<<endl;
    }
}