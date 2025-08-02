#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;

        //Taken input
        vector<int> a(n);
        for(int &i:a) cin>>i;

        //Process
        cout<<min(a[0]+a[1],2*a[0])<<endl;
    }
}