#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
     ll n; cin>>n;

     //edge case
     if(n==2 || n==3){
        cout<<"NO SOLUTION"<<endl;
        return 0;
     }
     if(n==4){
        cout<<2<<" "<<4<<" "<<1<<" "<<3<<endl;
        return 0;
     }

     int step=(n+1)/2;
     int temp=n;

     for(int i=0;i<n;i++){
        cout<<temp<<" ";
        if(i%2==0){
            temp-=step;
        }else{
            temp+=(step-1);
        }
     }
}