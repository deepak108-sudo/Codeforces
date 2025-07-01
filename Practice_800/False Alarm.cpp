#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,x; cin>>n>>x;

        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        bool f=false;
        int i=0;
        while(a[i]!=1){

            if(i==n-1){
                f=true;
                break;
            }

            i++;
        }

        if(i+x>n-1)  f=true;
        
        i+=x;

        while(i<n){
            if(a[i]==1){
                f=false;
                break;
            }
            i++;
        }

        if(f) cout<<"YES"<<endl;

        else 
        cout<<"NO"<<endl;

    }
}