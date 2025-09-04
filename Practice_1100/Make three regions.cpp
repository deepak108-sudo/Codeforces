#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n; cin>>n;
    vector<string> a(2);

    for(string &i:a) cin>>i;

    int ans=0;
    for(int i=0;i<2;i++){
        for(int j=1;j<n-1;j++){
            if(i==0){
                if(a[i][j]=='.' && a[i+1][j]=='.' && a[i][j-1]=='.' && a[i][j+1]=='.' && a[i+1][j-1]=='x' && a[i+1][j+1]=='x') ans++;
            }
            else{
                if(a[i][j]=='.' && a[i-1][j]=='.' && a[i][j-1]=='.' && a[i][j+1]=='.' && a[i-1][j-1]=='x' && a[i-1][j+1]=='x') ans++;
            }
        }
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