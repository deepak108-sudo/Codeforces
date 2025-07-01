#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        string s=string(k,'1');

        for(int i=n-k;i>0;i--) s+='0';

        cout<<s<<endl;
    }
}