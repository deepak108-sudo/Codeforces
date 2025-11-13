#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int n,t; cin>>n>>t;

    vector<int> b(n);
    for(int &i:b) cin>>i;
    
    int l=0,r=0,cnt=0,sum=0;
    while(r<n){
        sum+=b[r++];
        //First neutralize if greater
        while(sum>t)    sum-=b[l++];
        cnt+=(sum==t);
    }
    cout<<cnt<<endl;
}