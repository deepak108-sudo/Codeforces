#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(int &i:a) cin>>i;

    //Already beautiful
    for(int i=0;i<n-1;i++){
        if(abs(a[i]-a[i+1])<=1){
            cout<<0<<endl;
            return;
        }
    }

    //Sorted
    if(is_sorted(begin(a),end(a)) || is_sorted(rbegin(a),rend(a))){
        cout<<-1<<endl;
        return;
    }

    cout<<1<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}