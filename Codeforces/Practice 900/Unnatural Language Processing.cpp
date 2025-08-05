#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;

        string res="";
        while(!s.empty()){
            int x=0;

            if(s.back()=='a' || s.back()=='e') x=2; //case CV
            else x=3;

            while(x--){
                res+=s.back();
                s.pop_back();
            }
            res+='.';
        }

        res.pop_back();
        reverse(begin(res),end(res));
        cout<<res<<endl;
    }
}