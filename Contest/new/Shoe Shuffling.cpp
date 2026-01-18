#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n; cin>>n;
    vector<int> a(n);
    map<int,int> mp;
    for(int &i:a) {
        cin>>i;
        mp[i]++;
    }

    //
    for(int i=0;i<n;i++){
        if(mp[a[i]]==1){
            cout<<-1<<endl;
            return;
        }
    }

    vector<int> ans(n);
    int cnt=0;
    int temp=0;
    for(int i=0;i<n;i++){
        int space=mp[a[i]];
        cnt=temp+space;
        temp=cnt;

        ans[i]=cnt;
        space--;

        while(i<n && space){
            i++;
            ans[i]=cnt-space;
            space--;
        }
    }
    
    //Show
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}
signed main(){
  int t; cin>>t;
  while(t--){
      solve();
  }
}