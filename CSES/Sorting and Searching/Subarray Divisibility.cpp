#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
   int n; cin>>n;

   vector<int> a(n);
   for(int &i:a) {
        cin>>i;
   }

   map<int,int> seen;
   seen[0]++;
   
   int sum=0,cnt=0;
   for(int i=0;i<n;i++){
        sum+=(a[i]%n);
        sum=(sum+n)%n;
        cnt+=seen[sum];
        seen[sum]++;
   }

   cout<<cnt<<endl;
}