#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;

        int F=0,T=0,N=0;
        string ans="";
        for(char &ch:s){
            if(ch=='F') F++;
            else if(ch=='T') T++;
            else if(ch=='N') N++;
            else ans+=ch;
        }

        while(T--) ans+='T';
        while(F--) ans+='F';
        while(N--) ans+='N';

        cout<<ans<<endl;
    }
}