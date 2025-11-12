#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int n,t; cin>>n>>t;

    vector<ll> b(n);
    for(ll &i:b) cin>>i;
    
    int i=0,j=0;
    int maxi=0,sum=0,cnt=0;
    while(j<n){
        sum+=b[j];
        if(sum<=t) {
            cnt++;
            maxi=max(maxi,cnt);
        }

        if(sum>t){
            cnt-=1;
            sum-=b[i];
        } 
        j++;
    }

    cout<<cnt<<endl;
}