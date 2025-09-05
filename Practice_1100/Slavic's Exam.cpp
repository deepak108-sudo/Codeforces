#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin>>s;
    string t; cin>>t;

    int idx=0;

    for(int i=0;i<(int)s.size();i++){
        if(s[i]=='?'){
            if(idx<(int)t.size()) s[i]=t[idx++];
            else s[i]='a';
        }
        else if(s[i]==t[idx]) ++idx;
    }

    //checking
    if(idx>=(int)t.size()) cout<<"YES\n"<<s<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}