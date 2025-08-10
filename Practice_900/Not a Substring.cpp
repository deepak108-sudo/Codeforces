#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int n=s.size();

        //Case 1
        int cnt=0;
        int cnt2=0;

        for(int i=0;i<n-1;i+=2){
            if((s[i]=='(' && s[i+1]=='(') || (s[i]==')' && s[i+1]==')'))
                cnt++;
        }

        if(2*cnt==n){
            cout<<"NO"<<endl;
            continue;
        }

        //case 2
        cnt=0;
        for(int i=0;i<n-1;i+=2){
            if(s[i]=='(' && s[i+1]==')'){
                cnt++;
            }
        }

        if(cnt*2==n){
            cout<<"NO"<<endl;
            continue;
        }

        //case 3
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            cout<<"()";
        }
        cout<<endl;
    }
}