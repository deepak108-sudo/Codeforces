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
    prefix[i]=(prefix[i-1]+a[i])%7;
  }

  int maxi=0;
  vector<int> lastFound(7,-1);
  for(int i=0;i<n;i++){
    if(lastFound[prefix[i]]==-1){
      lastFound[prefix[i]]=i;
    }
    else{
      maxi=max(maxi,i-lastFound[prefix[i]]);
    }
  }

  cout<<maxi<<endl;
}