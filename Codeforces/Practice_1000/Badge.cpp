#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> s(n+1);

    for(int i=1;i<=n;i++){
        cin>>s[i];
    }

    vector<int> result;

    for(int i=1;i<=n;i++){
        unordered_set<int> seen;
        int current=i;

        while(seen.find(current)==seen.end()){
            seen.insert(current);
            current=s[current];
        }

        result.push_back(current);
    }

    //Print result
    for(auto &r:result) cout<<r<<" ";
    cout<<endl;

}