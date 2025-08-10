#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        int sum=a+b+c;

        if(sum%3!=0){
            cout<<"NO"<<endl;
            continue;
        }
        
        int f=false;
        int eq=sum/3;
        if(a<=eq && b<=eq){
            f=true;
        }

        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}