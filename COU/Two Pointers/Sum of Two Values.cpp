#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int n,t; cin>>n>>t;


    vector<int> a(n);
    for(int &i:a) cin>>i;
    
    map<int,int> present;
    for(auto i=0;i<n;i++){
        if(present.count(t-b[i])) {
            cout<<present[t-b[i]]<<" "<<i+1<<endl;
            return 0;
        }
        present[b[i]]=i+1;
    }

    cout<<"IMPOSSIBLE"<<endl;
}