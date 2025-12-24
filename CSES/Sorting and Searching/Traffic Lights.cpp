#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x; cin>>x>>n;

    set<int> pos;
    multiset<int> plens;

    plens.insert(x); //initial length of path
    pos.insert(0);
    pos.insert(x);

    int p;
    for(int i=0;i<n;i++){
        cin>>p;

        //Iterator of just back and forth of present traffic light
        auto right=pos.upper_bound(p);
        auto left=right;
        left--;

        //Particular no.
        int r=*right;
        int l=*left;

        //First remove the previous len. becoz we are going to split the passage
        plens.erase(plens.find(r-l));
        plens.insert(r-p);
        plens.insert(p-l);
        
        //Situate the traffic light
        pos.insert(p);
        
        //Print greatest plens after inserting traffic light at position p
        cout<<*plens.rbegin()<<" "; //sorted in ascending order
    }

}