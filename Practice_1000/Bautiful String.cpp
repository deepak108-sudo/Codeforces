#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        
        //We can either take all 0 or 1 to remove eventually give all ones or all zeroes
        vector<int> pos;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') pos.push_back(i+1);
        }
        
        //Now print
        cout<<pos.size()<<endl;
        for(int i=0;i<pos.size();i++){
            cout<<pos[i]<<" ";
        }
        
        cout<<endl;
    }
}