#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        vector<int> a(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        //Used Xor property
        //in Even Xor and replaced 
        //Again xor and replcd
        
        if(n%2==0){
            cout<<2<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<1<<" "<<n<<endl;
        }

        //Odd is extension of even. We took even length and then xor replaced like even (2 operation)
        //Then operated last element 0 xor n =n and replace n xor n Again n xor n =0 then replace
        else{
            cout<<4<<endl;
            cout<<1<<" "<<n-1<<endl;
            cout<<1<<" "<<n-1<<endl;
            cout<<n-1<<" "<<n<<endl;
            cout<<n-1<<" "<<n<<endl;
        }
    }
}