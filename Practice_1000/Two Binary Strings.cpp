#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int t; cin>>t;
    while(t--){
        string a,b; cin>>a>>b;

        bool f=false;

        //if YES then it will in the form of 000111, 00111111
        for(int i=0;i<(ll)a.size();i++){
            if(a[i]=='0' && b[i]=='0' && a[i+1]=='1' && b[i+1]=='1'){
                f=true;
                break;
            }
        }

        if(f==true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}