#include<bits/stdc++.h>
using namespace std;
#define int long long
int total=1e9+1;

void solve(){
    string s; cin>>s;
    int n=s.size();

    int l=0,r=0,star=0;
    for(auto &ch:s){
        if(ch=='<') l++;
        else if(ch=='*') star++;
        else r++;
    }

    if(star>1){
        cout<<-1<<endl;
        return;
    }
    string dummy=string(l,'<')+string(star,'*')+string(r,'>');
    
    if(dummy==s) cout<<max(l+star,star+r);
    else cout<<-1;
    cout<<endl;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}