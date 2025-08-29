#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;

    vector<int> a(n);
    for(int &i:a) cin>>i;

    long long  sumE=0,sumO=0;
    int cntE=0,cntO=0;

    for(int i=0;i<n;i++){
        if(i%2==0){
            sumE+=a[i];
            cntE++;
        }
        else{
            sumO+=a[i];
            cntO++;
        }
    }

    if(sumE/cntE==sumO/cntO && sumE%cntE==0 && sumO%cntO==0) cout<<"YES";
    else cout<<"NO";
    cout<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
    //cout<<"noice"<<endl;
}