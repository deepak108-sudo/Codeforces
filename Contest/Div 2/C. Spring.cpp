#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a,b,c,k;
    cin>>a>>b>>c>>k;

    int lcm_ab=lcm(a,b);
    int lcm_bc=lcm(b,c);
    int lcm_ac=lcm(a,c);
    int lcm_abc=lcm(lcm(a,b),c);

    int ansA=(k/a)*6- 3*(k/lcm_ab)-3*(k/lcm_ac)+2*(k/lcm_abc);
    int ansB=(k/b)*6- 3*(k/lcm_ab)-3*(k/lcm_bc)+2*(k/lcm_abc);
    int ansC=(k/c)*6- 3*(k/lcm_ac)-3*(k/lcm_bc)+2*(k/lcm_abc);

    cout<<ansA<<" "<<ansB<<" "<<ansC<<endl;

}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}