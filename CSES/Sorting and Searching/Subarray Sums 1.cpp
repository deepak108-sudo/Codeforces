#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
   int n,x; cin>>n>>x;

   vector<int> a(n);
   for(int &i:a) cin>>i;
   
   // O(n^2) 
   // int cnt=0;
   // for(int i=0;i<n;i++){
   //    int sum=0;
   //    for(int j=i+1;j<n;j++){
   //       sum+=a[j];
   //       if(sum==x) cnt++;
   //    }
   // }

   // cout<<cnt<<endl;

   // O(n), Sliding Windows
   int cnt=0;

   int i=0,j=0;
   int sum=0;
   while(j<n){
      sum+=a[j];
      
      while(sum>x){
         sum-=a[i];
         i++;
      }


      if(sum==x){
         cnt++;
      }
      
      j++;
   }

   cout<<cnt<<endl;
}