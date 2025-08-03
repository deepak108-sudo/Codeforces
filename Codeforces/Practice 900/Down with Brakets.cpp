#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int n=s.size();
        int count=0;

        stack<char> st;
        for(auto &ch:s){
            if(ch=='(')  
                st.push(ch);
            else
                st.pop();

            if(st.empty()) count++;
        }

        if(count==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}