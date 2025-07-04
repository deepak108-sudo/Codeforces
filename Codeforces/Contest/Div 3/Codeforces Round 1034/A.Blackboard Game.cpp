#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;

        //4n ---> Bob
        //4n+1, 4n+2, 4n+3 ----> Alice
        if(n%4==0) cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;
    }
}