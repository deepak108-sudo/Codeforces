#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m; cin>>n>>m;

    vector<int> cnt(m,0);   //element count in all set
    int d=0; //total distinct element
    vector<vector<int>> v(n); //store each set element

    for(int i=0;i<n;i++){
        int l; cin>>l;
        v[i].resize(l);

        for(int j=0;j<l;j++){
            int x; cin>>x;
            x--;    //to fit in zero based indexing
            if(cnt[x]==0) d++; //count distinct element when it introduced
            cnt[x]++;

            v[i][j]=x;
        }
    }

    int ans=(d==m);
    if(ans==0){
        cout<<"NO"<<endl;
        return;
    }

    //Try to simulate if i leave the one set then is it possible to pick and form all number
    for(int i=0;i<n;i++){
        for(auto &x:v[i]){
            cnt[x]--;
            if(cnt[x]==0) d--;
        }

        if(m==d) ans++;
        
        //early exit
        if(ans>=3){
            cout<<"YES"<<endl;
            return;
        }

        //Restore so that we further simulate removing i+1 not also i
        for(auto &x:v[i]){
            if(cnt[x]==0) d++;
            cnt[x]++;
        }
    }

    //Checking for no if ans<3
    cout<<"NO"<<endl;
}
int main(){
    int t; cin>>t;

    while(t--){
        solve();
    }
}