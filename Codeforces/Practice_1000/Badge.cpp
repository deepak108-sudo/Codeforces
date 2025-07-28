#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    unordered_map<int,int> mp;

    for(int i=1;i<=n;i++){
        int accused;
        cin>>accused;
        mp[i]=accused;
    }

    vector<int> result;

    for(int i=1;i<=n;i++){
        unordered_set<int> seen;
        int current=i;

        while(seen.find(current)==seen.end()){
            seen.insert(current);
            current=mp[current];
        }

        result.push_back(current);
    }

    //Print result
    for(auto &r:result) cout<<r<<" ";
    cout<<endl;

}