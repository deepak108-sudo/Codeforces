#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin>>s;
    string t; cin>>t;

    int i=0;
    int j=0;

    for(;i<s.size();i++){
        if(j==t.size()){
            break;
        }
        
        if(s[i]==t[j]) {
            j++;
            continue;
        }

        if(s[i]=='?'){
            s[i]=t[j];
            j++;
        }

    }

    if(j>=t.size()){
        for(int k=i;k<s.size();k++){
            if(s[k]=='?') s[k]='a';
        }
        cout<<"YES"<<endl;
        cout<<s<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}