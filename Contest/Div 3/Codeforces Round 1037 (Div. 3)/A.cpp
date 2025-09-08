#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,m;
        cin>>n;
        string a; cin>>a;
        cin>>m;
        string b; cin>>b;

        string c; cin>>c;
        string vladB="";
        string divaE="";

        reverse(begin(b),end(b));

        for(char ch:c){
            if(ch=='D') divaE+=b.back();
            else vladB+=b.back();

            b.pop_back();
        }

        reverse(begin(vladB),end(vladB));

        cout<<vladB+a+divaE<<endl;
    }
}