#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k; cin>>n>>k;

    int left=n,right=n;
    int cnt=0;

    while(left!=1){
        if(left<=k && k<=right) break;

        int temp=left;
        left=left/2;
        right=right/2+right%2;

        cnt++;
    }

    if(left<=k && k<=right) cout<<cnt;
    else cout<<-1;

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

