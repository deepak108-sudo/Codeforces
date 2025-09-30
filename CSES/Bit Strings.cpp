#include<bits/stdc++.h>
using namespace std;
#define int long long

int mod=1e9+7;

int binary_exp(int b,int p){
    int res=1;
    
    while(p>0){
        if(p&1) res=(res*b)%mod;  //odd
        b=(b*b)%mod;
        p>>=1;;   //di)vide by 2
    }

    return res%mod;
}
signed main(){
     //Taken input
    int n; cin>>n;
    cout<<binary_exp(2,n);
}