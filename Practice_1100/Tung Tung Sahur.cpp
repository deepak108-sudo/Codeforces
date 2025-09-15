#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string p,s; cin>>p>>s;

    int n=p.size();
    int m=s.size();

    //intially size does not fit 
    if(m<n || m>2*n || p[0]!=s[0]){ //notice the last check its for (L   R)
        cout<<"NO"<<endl;
        return;
    }

    //count the consecutive equal character
    vector<int> pp;
    int cnt=1;
    for(int i=1;i<n;i++){
        if(p[i]!=p[i-1]){
            pp.push_back(cnt);
            cnt=1;
        }
        else cnt++;
    }
    pp.push_back(cnt);  //Last push cnt

    //Do same with second string
    cnt=1;
    vector<int> ss;
    for(int i=1;i<m;i++){
        if(s[i]!=s[i-1]){
            ss.push_back(cnt);
            cnt=1;
        }
        else cnt++;
    }
    ss.push_back(cnt);

    //Now check if mismathc in size LLLLRR and LLLRRL
    if(pp.size()!=ss.size()){
        cout<<"NO"<<endl;
        return;
    }

    //Now check the real thing 
    for(int i=0;i<(int)pp.size();i++){
        if(ss[i]<pp[i] || ss[i]>2*pp[i]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;

}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}