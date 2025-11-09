#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(int &i:a)
        cin>>i;

    pair<int,int> p;
    bool f=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((a[j]%a[i])%2==0){
                // cout<<a[i]<<" "<<a[j]<<endl;
                p.first=a[i]; 
                p.second=a[j];
                f=true;
            }
        }
    }

    if(f) {
        cout<<p.first<<" "<<p.second<<endl;
        return;
    }
    //Not Possible
    cout<<-1<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}