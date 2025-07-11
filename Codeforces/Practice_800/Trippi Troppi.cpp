#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string s;
        cin>>s;

        string ans;
        ans.push_back(s[0]);

        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                ans.push_back(s[i+1]);
            }  
        }

        cout<<ans;
    }
}