#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;

        int root=ceil(sqrt(n));

        if(root*root==n){
            cout<<0<<" "<<root<<endl;
        }
        else{
            cout<<-1<<endl;
        }

    }
}