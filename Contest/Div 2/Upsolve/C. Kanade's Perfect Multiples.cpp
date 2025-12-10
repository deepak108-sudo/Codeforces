#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k; cin>>n>>k;
    set<int> st;
    int x;

    for(int i=0;i<n;i++){
        cin>>x;
        st.insert(x);
    }



    //Now take each one and insert in set B and check it is possible to find all multiple till k

    set<int> vis;  //Used to ignore higher a[i] which already been covered by smaller a[i]
    set<int> ans;
    for(auto num: st){  
        if(!vis.count(num)){
            for(int i=1;i<=k;i++){
                int mul=num*i;
                if(mul>k) break;    //early exit
    
                //If multiple till less than k not found in existing set A then not possible
                if(!st.count(mul)){
                    cout<<-1<<endl;
                    return;
                }
                vis.insert(mul);
            }
            ans.insert(num);
        }
    }

    //Print the result
    cout<<ans.size()<<endl;
    for(auto num:ans) cout<<num<<" ";
    cout<<endl;
}
signed main(){
  int t; cin>>t;
  while(t--){
      solve();
  }
}