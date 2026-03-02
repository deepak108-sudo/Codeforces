#include<bits/stdc++.h>
using namespace std;
#define int long long

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define test_case int t; cin>>t; while(t--)

#define vi vector<int>

#define pb push_back

#define ALL(v) v.begin(), v.end()

#define vin(v,n) vector<int> v(n); for(int i=0;i<n;i++) cin>>v[i];
#define vout(v) for(auto &x:v) cout<<x<<" "; cout<<"\n";

#define FORN(i,n) for(int i=0;i<n;i++)
#define FOR(i,a,b) for(int i=a;i<b;i++)

void solve(){
    int n,l,r; 
    cin>>n>>l>>r;
    l--; r--;

    vin(a,n);

    vi con;

    FOR(i,l,r+1)
        con.pb(a[i]);

    FOR(i,r+1,n)
        con.pb(a[i]);

    sort(ALL(con));

    long long sum=accumulate(con.begin(),con.begin()+(r-l+1),0LL);
    long long ans=sum;

    con.clear();

    FOR(i,0,l)
        con.pb(a[i]);

    FOR(i,l,r+1)
        con.pb(a[i]);

    sort(ALL(con));

    sum=accumulate(con.begin(),con.begin()+(r-l+1),0LL);
    ans=min(ans,sum);

    cout<<ans<<endl;
}

signed main(){
    fast_io
    test_case{
        solve();
    }
}