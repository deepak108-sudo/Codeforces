#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n-1);

        for(int &i:a) cin>>i;

        int temp=1e3;

        for(int i=0;i<n;i++){
            cout<<temp<<" ";

            temp=temp+a[i];
        }

        cout<<endl;
    }
}