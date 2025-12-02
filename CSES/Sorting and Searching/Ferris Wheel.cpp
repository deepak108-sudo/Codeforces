#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
   int n,x; cin>>n>>x;
   vector<int> a(n);
   for(int &i:a) cin>>i;

   sort(begin(a),end(a));

    int i=0,j=n-1,ans=0;
   while(i<=j){
    if(a[j]+a[i]<=x){
        i++;
        j--;
        ans++;
    }
    else{
        j--;
        ans++;
    }
   }

   cout<<ans<<endl;
}