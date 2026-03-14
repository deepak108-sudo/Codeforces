#include<bits/stdc++.h>
using namespace std;

void solve(){
  string s; cin>>s;
  int n=s.size();

  for(int i=1;i<n;i++){
    int j=i;
    while(j>=1 && s[j]!=0 && s[j-1]<s[j]-1){
        swap(s[j],s[j-1]);
        s[j-1]--;
        j--;
    }
}
    cout<<s<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}