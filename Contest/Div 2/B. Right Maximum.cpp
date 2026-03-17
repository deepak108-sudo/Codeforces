#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    string s; cin>>s;

    vector<bool> ff(n,false);
    ff[0]=true;

    for(int i=1;i<n;){
        if(ff[i]==true){
            break;
        }

        if(s[i-1]=='R'){
            ff[i]=true;
            if(s[i]=='L') i--;
            else
            i++;
        }
        else if(s[i-1]=='L'){
            ff[i]=true;
            if(s[i]=='R') i++;
            else 
            i--;
        }
    }

    //count
    int cnt=0;
    for(int i=0;i<n;i++){
        if(ff[i]==true) cnt++;
    }
    cout<<cnt<<endl;
   
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}