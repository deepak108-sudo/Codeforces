#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int n; cin>>n;

    vector<ll> w(n);
    for(ll &i:w) cin>>i;

    ll ans=LLONG_MAX;
    for(int m=0;m<(1<<n);m++){  //For n=3 it will 2^8
        ll sum1=0,sum2=0;
        for(int i=0;i<n;i++){
            if(m & 1<<i){   //if m ith value set then add this in group 1
                sum1+=w[i];
            }
            else{
                sum2+=w[i];
            }
        }
        ans=min(ans,llabs(sum1-sum2));
    }

    cout<<ans<<endl;
}