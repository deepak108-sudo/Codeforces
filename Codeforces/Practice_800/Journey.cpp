#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,a,b,c; cin>>n>>a>>b>>c;

        int total=n/(a+b+c);

        //for three days
        total*=3;

        n%=(a+b+c);

        if(n==0) cout<<total;
        else if(n<=a) cout<<total+1;
        else if(n<=(a+b)) cout<<total+2;
        else cout<<total+3;

        cout<<endl;
    }
}