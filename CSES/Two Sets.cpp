#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
     //Taken input
     int n; cin>>n;

     int target=n*(n+1)/4;

     if(target%2==1){
        cout<<"NO";
        return;
     }

     set<int> a;
     set<int> b;

     for(int i=1;i<=n;i++){
        a.insert(i);
     }

     for(int i=n;i>=0;i--)



}