#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;

        int cnt=0;
        for(char &ch:s){
            if(ch=='U') cnt++;
        }

        cout<<((cnt%2!=0) ? "YES" : "NO")<<endl;
    }
}