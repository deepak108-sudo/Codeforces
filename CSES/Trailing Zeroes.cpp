//Definition: Legendre’s formula gives the exponent of a prime number p in the prime factorization of n!.

//Exponent of p in n! = floor(n/p) + floor(n/p^2) + floor(n/p^3) + ... (until p^k > n)
#include<bits/stdc++.h>
using namespace std;
#define int long long

int mod=1e9+7;

signed main(){
     //Taken input
     int n; cin>>n;
     int ans=0;
     
     for(int d=5; d<=n;d*=5){
        ans+=(n/d);
     }
    cout<<ans<<endl;
}