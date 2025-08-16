#include<bits/stdc++.h>
using namespace std;

#define all(v) begin(v),end(v)

int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> a(n);

        for(int i=0;i<n;i++) {
            cin>>a[i];
            a[i]%=k;

            if(a[i]==0) a[i]=k;
        }

        vector<int> ord(n);
        iota(all(ord),0); //Fill form 0,1,2,..

        //sort keep in mind if tie happen do not change relative order
        stable_sort(all(ord),[&](int i,int j){
            return a[i]>a[j];
        });

        //Print
        for(int &i:ord)
            cout<<i+1<<" ";

        cout<<endl;
    }
}