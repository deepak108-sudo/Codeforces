#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    int ans=0;
    int lastImp=INT_MIN;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){  //Then update last important
            lastImp=i;
        }
        else if(lastImp+k<i){   //lastUpdated i and s[i]=='0' then we can sleep and length from last imp should be maximum. So we can sleep
            ans++;
        }
    }

    cout<<ans<<endl;
}
signed main(){
  int t; 
  cin>>t;
  while(t--){
      solve();
  }
}