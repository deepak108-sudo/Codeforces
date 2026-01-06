#include<bits/stdc++.h>
using namespace std;
bool good(vector<int> &x,vector<int> &y,int n,int k){
    for(int i=0;i<n;i++){
        if(x[i]<=y[(i+k)%n]){   //not possible body or leg should be greater
            return false;
        }
    }
    return true;
}

void solve(){
    int n; cin>>n;
    vector<int> a(n),b(n),c(n);
    for(int &i:a) cin>>i;
    for(int &i:b) cin>>i;
    for(int &i:c) cin>>i;

    int k1=0,k2=0;
    for(int j=0;j<n;j++){
        if(good(b,a,n,j)) k1++;
        if(good(c,b,n,j)) k2++;
    }

    cout<<1LL*k1*k2*n<<endl;
}
signed main(){
  int t; 
  cin>>t;
  while(t--){
      solve();
  }
}