#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string s,m; cin>>s>>m;
        int prefix=0;
        int sn=s.size();
        int tn=m.size();

        if(s[0]!=m[0]){
            cout<<sn+tn<<endl;
            continue;
        }

        int i=0;
        for(;i<min(sn,tn);i++){
            if(s[i]!=m[i]){
                break;
            }
            prefix++;
        }

        prefix+=1;

        prefix+=((tn-i)+(sn-i));

        cout<<prefix<<endl;
    }
}