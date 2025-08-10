#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        
        bool f=false;

        int mn=n+1,mx=0;
        for(int i=0;i<n;i++){
            if(s[i]=='A' && f==false){
                f=true;
                mn=i;
            }
            else if(s[i]=='B')
                mx=i;
        }

        cout<<((mx-mn)<0 ? 0 : (mx-mn))<<endl;
    }
}