#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long long a,b,k; cin>>a>>b>>k;
        
        long long g=__gcd(a,b);

        a/=g;
        b/=g;

        long long gre=(a>=b ? a : b);

        if(gre <=k){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
}