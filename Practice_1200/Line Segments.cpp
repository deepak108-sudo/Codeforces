#include<bits/stdc++.h>
using namespace std;

void solve(){
   int n; cin>>n;
   double a,b,c,d; cin>>a>>b>>c>>d;

   vector<double> vec(n);
   for(double &i:vec) cin>>i;

   double dist=sqrt((a-c)*(a-c)+(b-d)*(b-d));

   vec.push_back(dist);
   double maxi=*max_element(begin(vec),end(vec));

   double sum=accumulate(begin(vec),end(vec),0.0);

   double rem_sum=sum-maxi;

   if(maxi>rem_sum){
    cout<<"NO"<<endl;
   }
   else{
    cout<<"YES"<<endl;
   }
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}