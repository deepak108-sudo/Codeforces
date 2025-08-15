#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int n=s.size();

        //Counting no. of zeores and ones
        int z=count_if(begin(s),end(s),[](char c){ return c=='0'; });
        int o=count_if(begin(s),end(s),[](char c){ return c=='1'; });

        //Process
        int i;
        for(i=0;i<n;i++){
            if(s[i]=='1'){
                if(z==0) break;
                z--;
            }
            else{
                if(o==0) break;
                o--;
            }
        }

        cout<<n-i<<endl;

    }
}
    