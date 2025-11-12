#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int n,t; cin>>n>>t;

    vector<int> b(n);
    for(int &i:b) cin>>i;
    
    int i=0,j=0,cnt=0,sum=0;
    while(j<n){
        sum+=b[j];

        //First neutralize if greater
        while(sum>t){
            sum-=b[i];
            i++;
        }

        cnt+=(sum==t);
        j++;
    }
    cout<<cnt<<endl;
}