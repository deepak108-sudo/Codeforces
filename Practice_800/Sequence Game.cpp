#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n; cin>>n;
   
    int mini=INT_MAX,maxi=INT_MIN;
    vector<int> a(n);
    for(int &i:a) {
        cin>>i;

        if(i<mini) mini=i;
        if(i>maxi) maxi=i;
    }
    int x; cin>>x;

    (x>=mini && x<=maxi) ? cout<<"YES" : cout<<"NO";
    cout<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}