#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int mod=1e9+7;

    int n,x; cin>>n>>x;
    vector<int> a(n);
    vector<int> ways(x+1,0);
    ways[0]=1;

    //taking input
    for(int i=0;i<n;i++){                   
        cin>>a[i];
    }

    //base case
    for(int i=0;i<n;i++){
        for(int sum=1;sum<=x;sum++){
            if(sum-a[i]<0) continue;

            ways[sum]=(ways[sum]+ways[sum-a[i]])%mod;
        }
    }

    //To show the result
    cout<<ways[x]<<endl;
}
signed main(){
   solve();
}