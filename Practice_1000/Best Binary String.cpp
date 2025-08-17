#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        
        char prev='0';
        for(auto &c:s){
            if(c=='?') c=prev;
            prev=c;
        }
        cout<<s<<endl;
    }
}