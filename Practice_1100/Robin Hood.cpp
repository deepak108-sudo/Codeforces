#include<bits/stdc++.h>
using namespace std;
#define int long long

bool check(vector<int> &a,int s,int x,int n){
    double threshold=(double)(s+x)/(2.0*n);
    int unHappy=0;
    for(int &val:a){
        if(val<threshold) unHappy++;
    }
    return unHappy>(n/2);
}


void solve(){
    int n; cin>>n;

    //taken input
    vector<int> a(n);
    for(int &i:a) cin>>i;

    //edge case
    if(n==1 || (n==2)){
        cout<<-1<<endl;
        return;
    }

    //finding the no. to be less than that
    int s=accumulate(begin(a),end(a),0LL);
    
    
    //Count how many are unhappy
    if(check(a,s,0,n)){
        cout<<0<<endl;
        return;
    }

    int l=1,r=1e13;
    int ans=0;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(check(a,s,mid,n)){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }

    cout<<ans<<endl;

}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}