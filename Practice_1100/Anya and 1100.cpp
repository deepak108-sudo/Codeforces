#include<bits/stdc++.h>
using namespace std;
using ll=long long;

bool check_1100(string &s,int i){
    if(i<0) return false;
    if(i>(int)s.size()-4) return false;
    
    if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='0') return true;
    return false;
}

void solve(){
    string s; cin>>s;
    int n=s.size();

    int q; cin>>q;

    //count initial 1100
    int cnt=0;
    for(int i=0;i<n;i++){
        if(check_1100(s,i)) cnt++;
    }
    
    while(q--){
        int i,v; cin>>i>>v;
        i--;
        if(s[i]!=('0'+v)){
            int before=(check_1100(s,i-3) || check_1100(s,i-2) || check_1100(s,i-1) || check_1100(s,i));

            s[i]=('0'+v);

            int after=(check_1100(s,i-3) || check_1100(s,i-2) || check_1100(s,i-1) || check_1100(s,i));

            cnt+=(after-before);
            // if(before!=after){
            //     if(after) cnt++;
            //     else cnt--;
            // }
        }
        cout<<((cnt>0) ? "YES" : "NO")<<endl;

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