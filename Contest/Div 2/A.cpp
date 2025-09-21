#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   int n; cin>>n;

   vector<int> a(n);

   for(int &i:a) cin>>i;

   int maxi=*max_element(begin(a),end(a));
   vector<int> count(maxi+1);
   

   for(int i=0;i<n;i++){
    count[a[i]]++;
   }
   n=count.size();


   vector<int> vec;
   for(int i=0;i<n;i++){
    if(count[i]!=0){
        vec.push_back(count[i]);
    }
   }

   n=vec.size();
   
   vector<int> sm(n);
   
   sm[0]=vec[0];
   for(int i=1;i<n;i++){
    sm[i]=min(vec[i],sm[i-1]);
   }

//    for(int i:sm) cout<<i<<" ";
//    return;



   int mmx=0;
   for(int i=0;i<n;i++){
    int sum=0;
    int num=sm[i];
    for(int j=i;j>=0;j--){
        if(sm[j]>=num) sum+=num;
        mmx=max(mmx,sum);
        //cout<<mmx<<" ";
    }
   }
//return;
   cout<<mmx<<endl;

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}