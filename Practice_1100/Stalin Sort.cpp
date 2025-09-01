#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> a(n);
    int mini=n;

    for(int &i:a) cin>>i;

    vector<int> temp=a;
    sort(begin(temp),end(temp));

    for(int i=0;i<n;i++){
        int left=i;

        int rightG=upper_bound(begin(temp),end(temp),a[i])-begin(temp);
        int right=n-rightG;

        mini=min(mini,left+right);
    }

    cout<<mini<<endl;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}