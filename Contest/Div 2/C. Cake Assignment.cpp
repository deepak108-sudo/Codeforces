#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll k,x; cin>>k>>x;

    vector<int> op;

    ll a=x;
    ll b=(1ll<<(k+1))-x;

    ll ans=0;
    ll tar=(1ll<<k);

    if(a==0 || b==0){
        cout<<-1<<endl;
        return;
    }

    while(a!=tar){
        if(a<tar){
            b=b-a;
            a=2*a;
            op.push_back(1);
        }
        else{
            a=a-b;
            b=2*b;
            op.push_back(2);
        }
        ans++;
    }

    cout<<ans<<endl;

    for(int i=ans-1; i>=0; i--){
        cout<<op[i]<<" ";
    }
    cout<<endl;

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}