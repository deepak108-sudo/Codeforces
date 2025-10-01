#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
     //Taken input
     int n; cin>>n;

     //Taken input
     vector<int> a(n);
     ll cnt=0,t=0;
     

     for(int i=0;i<n;i++){
        if(i==0) t=a[i];

        cin>>a[i];
        //Checking
        if(a[i]<t){
            cnt+=(t-a[i]);
        }
        else{
            t=a[i];
        }
     }

     cout<<cnt<<endl;
}