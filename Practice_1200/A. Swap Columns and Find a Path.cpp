#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
   int n; cin>>n;
   vector<vector<int>> a(2,vector<int>(n));
   
   for(int i=0;i<2;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
   }

   //find max
   int ans=0;

   
   for(int i=0;i<n;i++){
        ans+=max(a[0][i],a[1][i]);
   }

   int res=-1e18;
   for(int i=0;i<n;i++){
        res=max(res,(ans-max(a[0][i],a[1][i]) + a[0][i]+a[1][i]));
   }

   cout<<res<<endl;

//    //Sum of two upper and lower
//    int skip=0;  
//    pair<int,int> store;
//    int maxi=a[0][0]+a[1][0];
//   // store.first
//     for(int j=1;j<n;j++){
//         int y=a[0][j];
//         int z=a[1][j];

//         //Sum of column
//         int sum=y+z;

//         if(sum<maxi) continue;

//         //Store the number
//        // pair<int,int> p={y,z};

//         //If maximum are equal
//         if(maxi==sum && (max(store.first,store.second) < max(y,z))){
//             store.first=y;
//             store.second=z;
//         }
        
//         else if(sum>maxi){
//             store.first=y;
//             store.second=z;
//             maxi=sum;
//             skip= j;
//         }
//     }

//     int ans=0;
//     for(int j=0;j<n;j++){
//         if(j==skip) continue;
//         ans+=max(a[0][j],a[1][j]);
//        //cout<<"****"<<max(a[0][j],a[1][j])<<"****";
//     }

//     cout<<ans+maxi<<endl;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}