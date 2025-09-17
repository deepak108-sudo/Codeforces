#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int a,b,c,d; cin>>a>>b>>c>>d;
        c-=a;
        d-=b;

        if(a>b) swap(a,b);
        if(c>d) swap(c,d);

        a+=1;   //total space
        c+=1;

        if((double)b/a >2.0 || (double)d/c > 2.0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}