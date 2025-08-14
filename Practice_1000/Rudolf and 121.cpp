#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);

        //Take input
        for(int &i:a) cin>>i;
        
        bool f=false;
        for(int i=0;i<=n-3;i++){
            if(a[i]<0){
                f=true;
                break;
            }
            int op=a[i];
            a[i]-=op;
            a[i+1]-=(2*op);
            a[i+2]-=op;
        }

        if(f==false){
            if(a[n-1]!=0 || a[n-2]!=0){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}