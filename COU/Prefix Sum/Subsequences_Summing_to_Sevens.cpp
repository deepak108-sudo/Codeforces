#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
  freopen("div7.in", "r", stdin);
	freopen("div7.out", "w", stdout);
  
  int n; cin>>n;

  vector<int> a(n);

  for(int &i:a) cin>>i;

  vector<int> prefix(n,0);
  prefix[0]=a[0];

  for(int i=1;i<n;i++){
    prefix[i]=prefix[i-1]+a[i];
  }

  int maxi=0;
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        if((prefix[j]-prefix[i])%7==0)
          maxi=max(maxi,(j-i));
    }
  }

  cout<<maxi<<endl;
}