#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
   int n; cin>>n;

   vector<int> a(n);
   for(int &i:a) {
        cin>>i;
   }

   //found out prefix sum appended 0 at beginning
   vector<int> prefix(n+1,0);
   prefix[1]=a[0]%n;

   for(int i=2;i<=n;i++){
        prefix[i]=(prefix[i-1]+a[i-1])%n;
        if(prefix[i]<0) prefix[i]+=n;
   }
   
    int cnt=0;
    map<int,int> st; //to remember we have seen the value before
   for(int i=0;i<=n;i++){
   // int rem=prefix[i]-x;
    if(st.count(prefix[i])){
        cnt+=st[prefix[i]];
    }
    st[prefix[i]]++;
   }

   cout<<cnt<<endl;
}