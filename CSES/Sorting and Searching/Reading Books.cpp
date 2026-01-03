#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n; cin>>n;
    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int maxi=*max_element(begin(a),end(a));
    int sum=accumulate(begin(a),end(a),0LL);

    cout<<max(sum,2*maxi);  // 2*maxi if maxi> t1+t2+..tn-1
}