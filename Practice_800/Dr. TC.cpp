#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;

        string s;   cin>>s;

        int tOne=0;
        for(char &ch:s){
            if(ch=='1') tOne++;
        }

        int result=0;
        for(char &ch:s){
            int num=ch-'0';
            
            if(num==0){
                result+=(tOne+1);
            }else
                result+=(tOne-1);
        }

        cout<<result<<endl;
    }
}