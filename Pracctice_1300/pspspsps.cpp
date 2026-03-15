#include<bits/stdc++.h>
using namespace std;
#define int long long
int total=1e9+1;

void solve(){
   int n; cin>>n;
   string s; cin>>s;

   if(s[0]=='s') s[0]='.';
   if(s[n-1]=='p') s[n-1]='.';

    int idxS=s.find('s');
    int idxP=s.find('p');
    if(idxS == string::npos || idxP==string::npos){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}