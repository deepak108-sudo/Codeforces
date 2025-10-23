#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k; cin>>n;
    multiset<int> vis;
    
    for(int i=0;i<n;i++){
        cin>>k;

        auto it=vis.upper_bound(k);
        if(it==vis.end()){
            vis.insert(k);
        }
        else{
            vis.erase(it);
            vis.insert(k);
        }
    }
    cout<<vis.size()<<endl;
}