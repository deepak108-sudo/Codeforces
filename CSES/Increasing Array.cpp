#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
     //Taken input
     int n; cin>>n;

     //Taken input
     vector<int> a(n);
     for(int &i:a){
        cin>>i;
     }

     int threshold=a[0];
     long long cnt=0;
     for(int i=1;i<n;i++){
        if(a[i]<threshold){
            cnt+=(threshold-a[i]);
        }
        else{
            threshold=a[i];
        }
     }

     cout<<cnt<<endl;
}