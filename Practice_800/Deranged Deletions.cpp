#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;

        //input
        vector<int> a(n);
        for(auto &i:a) cin>>i;
        
        vector<int> temp(n);
        temp=a;
        sort(begin(a),end(a));

        //To store
        vector<int> res;

        for(int i=0;i<n;i++){
            if(a[i]!=temp[i]){
                res.push_back(temp[i]);
            }
        }

        //to check
        if(res.empty()) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl<<res.size()<<endl;
            for(int &i:res) cout<<i<<" ";
            cout<<endl;
        }
    }
}