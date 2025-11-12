#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int n,t; cin>>n>>t;

    vector<ll> b(n);
    for(ll &i:b) cin>>i;
    
    vector<pair<int,int>> vec;
    for(int i=0;i<n;i++){
        vec.push_back({b[i],i+1});
    }

    sort(begin(vec),end(vec));

    int l=0,r=n-1;
    while(l<r){
        int temp=vec[l].first+vec[r].first;
        if(temp==t){
            cout<<vec[l].second<<" "<<vec[r].second;
            return 0;
        }

        if(temp<t) l++;
        if(temp>t) r--;
    }
    cout<<"IMPOSSIBLE"<<endl;
}