#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
   int n; cin>>n;
   vector<int> a(n);

   for(int &i:a) cin>>i;

   int curr=a[0],sum=a[0];
   for(int i=1;i<n;i++){
        curr=max(curr+a[i],a[i]);
        sum=max(sum,curr);
   }

   cout<<sum<<endl;
}