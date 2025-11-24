#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    
    int res=0;
    for(int i=0;i<=100;i++){
        for(int j=0;j<100;j++){
            if(2*i+4*j==n){
                res++;
            }
        }
    }

    cout<<res<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}

