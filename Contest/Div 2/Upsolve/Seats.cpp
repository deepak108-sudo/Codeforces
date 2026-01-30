#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    if(n<=2){
        cout<<1<<endl;
        return;
    }

    if(s[0]=='0' && s[1]=='0') s[1]='1';
    if(s[n-1]=='0' && s[n-2]=='0') s[n-2]='1';
    
    int prev=-1;
    int cnt=0;
    
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            if((i-prev>=3)){
                s[i]='1';
                prev=i;
                cnt++;
            }
        }
        else{
            cnt++;
            prev=i;
        }
    }
    cout<<s<<endl;

    cout<<cnt<<endl;
}

signed main(){
  int t; 
  cin>>t;
  while(t--){
      solve();
  }
}