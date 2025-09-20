#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
  int x,y;
  cin>>x>>y;

  if(x<y){
    cout<<2<<endl;
    return;
  }
    x-=1;
    if(x>y && y!=1){
        cout<<3<<endl;
        return;
  }
  else{
    cout<<-1<<endl;
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