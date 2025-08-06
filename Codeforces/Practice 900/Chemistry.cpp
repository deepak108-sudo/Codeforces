#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;

        string s; cin>>s;

        vector<int> mp(26,0);

        for(int i=0;i<n;i++){
            mp[s[i]-'a']++;
        }

        long long oddF=0;
        for(int i=0;i<26;i++){
            if(mp[i]%2!=0) oddF++;
        }

        if(oddF>k+1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}