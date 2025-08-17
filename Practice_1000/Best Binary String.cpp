#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int n=s.size();

        char prev='0';
        for(int i=0;i<n;i++){
            if(s[i]=='?' && prev=='0'){
                cout<<'0';
                prev='0';
            }
            else if(s[i]=='?' && prev=='1'){
                cout<<'1';
                prev='1';
            }
            else{
                cout<<s[i];
                prev=s[i];
            }
        }

        cout<<endl;
    }
}