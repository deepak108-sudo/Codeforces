#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        string s; cin>>s;

        int cnt=0;
        for(char &c:s){
            if(c=='1') ++cnt;
        }

        cout<<((cnt<=k || n < 2*k) ? "Alice" : "Bob")<<endl;
    }
} 