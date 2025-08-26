#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k; cin>>n>>k;

    vector<int> a(n);
    
    for(int i=0;i<n-1;i++){
        a[i]= k%2==0 ? n-1 : n;
    }

    a[n-1]=n-1;
    if(k%2==0) a[n-2]=n;
    
    //Prinnt
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
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