#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        int ans=0;

        bool f=false;
        for(int i=1;i<n-1;i++){
            if(s[i-1]=='.' && s[i]=='.' && s[i+1]=='.'){
                f=true;
                break;
            }
        }

        if(f) {cout<<2<<endl; continue;}

        //count
        for(char &ch:s){
            if(ch=='.') ans++;
        }
        cout<<ans<<endl;
    }
}