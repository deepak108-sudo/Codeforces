#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        //TO Do
        //input
        vector<int> a(n);
        for(auto &i:a) cin>>i;

        //Pair for storing number and its indi
        vector<pair<int,int>> prefix(n); prefix[0]={INT_MAX,-1};
        vector<pair<int,int>> suffix(n); suffix[n-1]={INT_MAX,-1};

        for(int i=1;i<n;i++)
            prefix[i]=min(prefix[i-1],{a[i-1],i});

        for(int i=n-2;i>=0;i--)
            suffix[i]=min(suffix[i+1],{a[i+1],i+2});

        //Process
        bool f=false;
        for(int i=1;i<n-1;i++){
            if(a[i]>prefix[i].first && a[i]>suffix[i].first){
                cout<<"YES"<<endl;
                cout<<prefix[i].second<<" "<<i+1<<" "<<suffix[i].second<<endl;
                f=true;
                break;
            }
        }
        if(!f) cout<<"NO"<<endl;
    }
}