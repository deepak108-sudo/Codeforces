#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){

    int n,m,k; cin>>n>>m>>k;

    vector<int> app(n);
    set<int> appar;
    for(int i=0;i<n;i++){
        cin>>app[i];
    }

    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        appar.insert(x);
    }

    int cnt=0;
    for(int i=0;i<n;i++){
        if(appar.empty()) break;
        
        for(int size=app[i]-k;size<=app[i]+k;size++){
            if(appar.count(size)){
                cnt++;
                appar.erase(size);
                break;
            }
        }
    }

    cout<<cnt<<endl;
}