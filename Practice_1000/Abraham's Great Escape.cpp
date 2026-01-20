#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k; cin>>n>>k;

    //If it point to escape cell then it automatically escape
    if(k==n*n-1){
        cout<<"NO"<<endl;
        return;
    }

    cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
        string s="";
        for(int j=0;j<n;j++){
            if(k>0){
                s+='U';
                k--;
            }
            //block it k exhausted so that it got stuck in same loop
            else if(i==n-1 && j==n-1){
                s+='L';
            }
            else if(i==n-1){
                s+='R';
            }
            else{
                s+='D';
            }
        }
        cout<<s<<endl;
    }

}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}