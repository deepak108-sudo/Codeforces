#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);

        //Taken input
        for(int &i:a) cin>>i;

        for(int i=1;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<a[0];
        cout<<endl;
    }
}