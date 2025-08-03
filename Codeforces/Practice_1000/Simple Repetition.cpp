#include<bits/stdc++.h>
using namespace std;

bool isPrime(int x){
    if(x<=1) return false;
    for(int i=2;i*i<=x;i++){
        if(x%i==0)
        {
            return false;
        }
    }
    return true;
}

int main(){
    int t; cin>>t;
    while(t--){
        int x,k; cin>>x>>k;
        
        if(k==2 && x==1){
            cout<<"YES";
        }
        else if(k>1 && x>=1) {
            cout<<"NO";
        }
         else if(k==1){
            cout<<(isPrime(x) ? "YES" :"NO");
         }
         cout<<endl;
    }
}