#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;

        int ones=0;
        for(char &ch:s){
            if(ch=='1') ones++;
        }

        if(ones==2 && s.find("11")!= string::npos){
            cout<<"NO"<<endl;
            continue;
        }
        
        if(ones%2==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}