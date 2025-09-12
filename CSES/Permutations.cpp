#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    //Intuition: Since every even has distance at 2 and every odd at distance 2 now take care of junction to join.
     ll n; cin>>n;
    if(n==1){
        cout<<1;
        return 0;
    }

     //edge case
     if(n==2 || n==3){
        cout<<"NO SOLUTION"<<endl;
        return 0;
     }
     else{
        //edge case n=4 when taken odd first
        for(int i=2;i<=n;i+=2) cout<<i<<" "; //Print all even first with difference 2
        for(int i=1;i<=n;i+=2) cout<<i<<" "; //Print odd
     }
     
}