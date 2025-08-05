#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);

        //Taken input
        for(int &i:a) cin>>i;

        vector<int> mp(26,0);

        string res;
        for(auto &num:a){
                for(int i=0;i<26;i++){
                    if(mp[i]==num){
                        res+=(char)(i+'a');

                        mp[i]++;
                        break;
                    }
                }
            }
        cout<<res;
        cout<<endl;
    }
        
}