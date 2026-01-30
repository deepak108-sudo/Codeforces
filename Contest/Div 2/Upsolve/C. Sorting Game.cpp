#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n; cin>>n;
    string s; cin>>s;

    //Check for sorting
    bool f=true;
    for(int i=1;i<n;i++){
        if(s[i-1]>s[i]) {
            f=false;
            break;
        }
    }

    //Already sorted then bob win
    if(f==true){
        cout<<"Bob"<<endl;
        return;
    }

    //If not then it turn to alice to win
    cout<<"Alice"<<endl;

    vector<int> ans;
    int l1=0,r0=n-1;
    while(l1<r0){
        while(l1<(n-1) && s[l1]=='0') l1++;
        while(r0>0 && s[r0]=='1') r0--;
        if(l1>=r0) break;

        swap(s[l1],s[r0]);
        ans.push_back(l1+1);
        ans.push_back(r0+1);
        l1++;
        r0--;
    }

    //Print the answer 
    cout<<ans.size()<<endl;
    sort(begin(ans),end(ans));
    for(auto &val:ans) cout<<val<<" ";
    cout<<endl;
    
}
signed main(){
  int t; cin>>t;
  while(t--){
      solve();
  }
}