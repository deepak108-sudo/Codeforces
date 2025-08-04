#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        string s; cin>>s;

        //Count one and zeros
        int one=0,zero=0;
        for(char &ch:s){
            ch == '1' ? one++ : zero++;
        }

        //processing
        if(one >= zero) one-=2*k;
        else zero-=2*k;

        if(zero==one) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}