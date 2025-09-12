#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
     ll n; cin>>n;
     
     ll s=0;
     int x;
     for(int i=0;i<n-1;i++){
        cin>>x; 
        s+=x;
     }

     long long sum=n*(n+1)/2;

     cout<<sum-s<<endl;
}