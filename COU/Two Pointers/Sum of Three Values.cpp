#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int n,t; cin>>n>>t;

    vector<pair<int,int>> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i].first;
        p[i].second=i+1;
    }

    //sort
    sort(begin(p),end(p));

    //traverse
    for(int i=0;i<n;i++){
        int rem=t-p[i].first;
        int s=i+1,e=n-1;
        while(s<e){
            int sum=p[s].first+p[e].first;
            if(sum==rem){
                cout<<p[i].second<<" "<<p[s].second<<" "<<p[e].second;
                return 0;
            }
            else if(sum<rem) s++;
            else e--;
        }
    }

    cout<<"IMPOSSIBLE"<<endl;
}