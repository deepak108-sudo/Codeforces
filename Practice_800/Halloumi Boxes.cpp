#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;

        vector<int> a(n);
        for(int &i:a) cin>>i;

        vector<int> copy=a;
        sort(begin(a),end(a));
        
        if(copy==a || k>1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}