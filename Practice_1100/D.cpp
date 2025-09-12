#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> a(n);

    for(int i=0;i<n;i++) {
        cin>>a[i];
    }

    //Checking
    map<int,int> mp1;
    for(int i:a){
        mp1[i]++;
    }

    int sum=0;
    for(auto p:mp1){
        sum+=p.first;
    }
    if(sum!=n){
        cout<<-1<<endl;
        return;
    }

    for(auto p:mp1){
        if(p.second!=p.first){
            cout<<-1<<endl;
            return;
        }
    }


    //print
    for(int i:a){
        cout<<mp1[i]<<" ";
    }
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}

