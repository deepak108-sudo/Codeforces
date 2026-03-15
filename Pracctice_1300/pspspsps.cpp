#include<bits/stdc++.h>
using namespace std;
#define int long long
int total=1e9+1;

void solve(){
   int n; cin>>n;
   string s; cin>>s;

   //ps... pattern always no
   // bool flag=false;
    int posIdx=s.find('p');

    if(posIdx!=string::npos){
        for(int i=posIdx+1;i<n;i++){
            if(s[i]=='s'){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
   
    //for other
    //s and p at edges having the permutation
    int flagP=0,flagS=0;
    for(int i=1;i<n-1;i++){
            if(s[i]=='s') flagS=true;
            else if(s[i]=='p') flagP=true;
    }

    if(flagP==true && flagS==true){
        cout<<"NO"<<endl;
        return;
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