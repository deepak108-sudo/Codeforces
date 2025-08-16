#include<bits/stdc++.h>
using namespace std;
using ll=long long;

vector<long long> weights;

long long recurse(int i,ll sum1,ll sum2){
    if(i==weights.size()){
        return abs(sum1-sum2);
    }

    return min(recurse(i+1,sum1+weights[i],sum2),recurse(i+1,sum1,sum2+weights[i]));
}


int main(){
    int n; cin>>n;
    weights.resize(n);

    for(ll &i:weights) cin>>i;
    cout<<recurse(0,0,0)<<endl;
}
