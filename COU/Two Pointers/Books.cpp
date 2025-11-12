#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int n,t; cin>>n>>t;

    vector<ll> b(n);
    for(ll &i:b) cin>>i;
    
    int i=0,j=0;
    int max_b=0,curr_t=0,curr_b=0;
    while(j<n){
        curr_t+=b[j];
        curr_b++;
        if(curr_t<=t) {
            max_b=max(max_b,curr_b);
        }

        while(curr_t>t){
            curr_b-=1;
            curr_t-=b[i];
            i++;
        } 
        j++;
    }

    cout<<curr_b<<endl;
}