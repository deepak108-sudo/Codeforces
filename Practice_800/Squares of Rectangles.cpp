#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int l1,b1,l2,b2,l3,b3;
        cin>>l1>>b1>>l2>>b2>>l3>>b3;

        bool f=false;
        //if all length are equal then summatiion of breadth should equal to length
        if(l1==l2 && l2==l3 && b1+b2+b3==l1)
            f=true;

        else if(b1==b2 && b2==b3 && l1+l2+l3==b1)
            f=true;

        else if(l1==l2+l3 && b2==b3 && l1==b1+b2)
            f=true;

        else if(b1==b2+b3 && l2==l3 && b1 == l1+l2)
            f=true;
        
        if(f==true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}