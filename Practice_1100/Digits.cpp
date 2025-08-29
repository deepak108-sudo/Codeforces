#include<bits/stdc++.h>
using namespace std;

void solve(){
   int n,d; cin>>n>>d;

   cout<<1<<" ";
        if(n>=3 || d%3==0) cout<<3<<" ";
        if(d==5) cout<<5<<" "; //since 0 is not included
        if(n>=3 || d==7) cout<<7<<" "; //tricker
        if(d==9 || n>=6 || (d%3==0 && n>=3)) cout<<9<<" "; 
   cout<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
    //cout<<"noice"<<endl;
}