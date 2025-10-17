#include<bits/stdc++.h>
using namespace std;
#define int long long
int total=1e9+1;
int mod=998244353;

vector<int> power2(100000-1,0);

//binary exponentation
int binaryExp(int a,int power){
    a%=mod;
    int res=1;
    while(power>0){
        if(power&1)
            res=res*a%mod;

        a=(a*(a%mod))%mod;
        power>>=1;
    }

    return res;
}


//logic function
void solve(){
   int n; cin>>n;
   vector<int> p(n),q(n);

   //taken input
   for(int &i:p) cin>>i;
   for(int &i:q) cin>>i;
   
   vector<int> posp(n);
   vector<int> posq(n);

   //Setting the  position
   for(int i=0;i<n;i++){
        posp[p[i]]=i;
        posq[q[i]]=i;
   }


   int maxp=0, maxq=0;
   vector<int> ans;
   for(int i=0;i<n;i++){
        maxp=max(maxp,p[i]);
        maxq=max(maxq,q[i]);

        pair<int,int>   p1= make_pair(maxp,q[i-posp[maxp]]);
        pair<int,int>  p2=make_pair(maxq,p[i-posq[maxq]]);
        pair<int,int> ansp=max(p1,p2);

        ans.push_back((power2[ansp.first]+power2[ansp.second])%mod);
   }

   //Printing
   for(int &i:ans){
    cout<<i<<" ";
   }
   cout<<endl;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for(int i=0;i<100000;i++){
        power2[i]=binaryExp(2,i);
    }

    int t; cin>>t;
    while(t--){
        solve();
    }
}