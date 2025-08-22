#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    
    vector<int> a(n);
    for(int &i:a) cin>>i;

    long long ans=LLONG_MAX;

    //Already covering this condition
    // //for all equal
    // int temp=a[0];
    // bool f=true;
    // for(int i=0;i<n;i++){
    //     if(a[i]!=temp){
    //         f=false;
    //         break;
    //     }
    // }

    // if(f==true){
    //     cout<<0<<endl;
    //     return;
    // }

    //for unequal
    int i=0;
    while(i<n){
        int j=i;
        while(j<n-1 && a[j+1]==a[i]) j++;

        long long startSum=1LL*i*a[i];
        long long endSum=1LL*(n-1-j)*a[j];
        ans=min(startSum+endSum, ans);

        //cout<<ans<<endl;

        i=j+1;
    }
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}

