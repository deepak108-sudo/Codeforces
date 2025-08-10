#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;

        vector<int> a(n);
        // a[0]=1;     //set 1 or 2 to first

        cout<<1<<" ";
        //other than 1 and 2
        for(int i=1;i<n-1;i++){
            cout<<i+2<<" ";
        }

        cout<<2<<endl;
        // a[n-1]=2;
    }
}