#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k; cin>>n>>k;

    vector<int> a(n);
    
   for(int &i:a) cin>>i;

   //for equal
   bool equal=all_of(begin(a),end(a),[&](int b){
    return b==a[0];
   });

   if(equal==true){
    cout<<0<<endl;
    return;
   }

   //If ataleast two are distinct
   unordered_map<int,int> mp;
   int maxCount=0;
   int ans=a[0];

   //Count maximum no.
   for(int num:a){
    mp[num]++;
    if(maxCount<mp[num]){
        ans=num;
        maxCount=mp[num];
    }
   }

   //process
   int maxi=0;
   bool l=false;
   pair<int,int> p={1,1};
   pair<int,int> res={1,1};
   int cnt=0;
   for(int i=0;i<n;i++){
    if(a[i]!=ans && l==false){
        p.first=i+1;
        //cnt++;
        l=true;
    }else if(a[i]!=ans){
        p.second=i+1;
        //cnt++;
    }else{
        if((res.second-res.first)<(p.second-p.first)){
            res=p;
        }
        //cnt=0;
        l=false;
    }
   }
   cout<<res.first<<" "<<res.second<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}