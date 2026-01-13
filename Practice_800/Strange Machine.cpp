#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n,q; cin>>n>>q;
    string s; cin>>s;

    vector<int> qr(q);
    for(int &i:qr) cin>>i;

    vector<int> prefix;
    for(int i=0;i<n;){
       if(s[i]=='A')
        prefix.push_back(0);

        while(i<n && s[i]=='A'){
            prefix.back()++;
            i++;
        }
        if(i<n && s[i]=='B')
        prefix.push_back(-1);
        
        if(i<n && prefix.back()==-1){
            i++;
        }
    }

    // for(int &i:prefix) cout<<i<<" ";
    // cout<<endl;

    // return;

    for(int i=0;i<q;i++){
        int key=qr[i];  //2
        int time=0;
        
            for(int j=0;;j++){
                j=j%((int)prefix.size());
                if(prefix[j]!=-1) {
                    time+=min(key,prefix[j]);
                    key-=min(key,prefix[j]);
                }

                else {
                    key=floor(key/2);
                    time++;
                }

                if(key==0){
                    break;
                }
            }
            cout<<time<<endl;
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