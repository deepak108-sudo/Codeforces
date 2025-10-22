#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int n,k; cin>>n>>k;

        map<int,int> mp;
        vector<int> a(n);
        for(int &i:a) {
            cin>>i;
            mp[i]++;
        }

        int mx1=mp[k];
        int mx2=0;

        for(int i=0;i<k;i++){
            if(!mp.count(i)){
                mx2++;
            }
        }
    
            cout<<max(mx1,mx2)<<endl;
    }
}