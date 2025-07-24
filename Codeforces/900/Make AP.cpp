#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        long long a,b,c; cin>>a>>b>>c;
        bool f=false;
        
        int new_a=2*b-a;
        int new_b=2*b-c;

        if(new_a/c>0 && new_a%c==0) f=true;
        else if(new_b/a>0 && new_b%a==0) f=true;
        else if((c+a)/2*b>0 && (c+a)%(2*b)==0) f=true;

        if(f==true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
