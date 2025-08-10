#include<bits/stdc++.h>
using namespace std;
//Defined lambda function
        auto repeat=[](string s,int k){
            string ans="";
            while(k--) ans+=s;
            return ans;
        };

int main(){
    int t; cin>>t;

    while(t--){
        string s,t; cin>>s>>t;
        
        int sn=s.size();
        int tn=t.size();

        //Formula derived lcm/len(s)
        int g= __gcd(sn,tn); 
        if(repeat(s,tn/g)==repeat(t,sn/g)){
            cout<<repeat(t,sn/g)<<endl;
        }
        else{
            cout<<-1<<endl;
        }

        

    }
}