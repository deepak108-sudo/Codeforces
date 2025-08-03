#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;

        vector<int> a(n);
        for(int &i:a){
            cin>>i;
        }

        int gcd=a[0];
        int lcm=a[0];

        for(int i=1;i<n;i++){
            lcm=(1LL*lcm*a[i])/__gcd(gcd,a[i]);
        }

        unordered_set<int> st(begin(a),end(a));
        
        int count=0;
        for(auto &num:st){
            if(lcm%num==0) count++;
        }

        cout<<count<<endl;
    }
}