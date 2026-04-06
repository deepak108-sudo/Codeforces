#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    int tempN=n;
    n*=2;
    vector<int> a(n);

    //Taking input
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    if(n==2){
        cout<<a[1]-a[0]<<endl;
        return;
    }

   int oddS=0;
   vector<int> odd,even;
   //Odd first caluculation i=1
   for(int i=0;i<n;i++){
        if(i&1){ //if even 
            oddS+=a[i];
        }
        else {
            oddS-=a[i];
        }
   }
   odd.push_back(oddS);

   int evenS=a[n-1]-a[0];
   //Even first calculation for i=2
   for(int i=1;i<n-1;i++){
        if(i&1){
            evenS-=a[i];
        }
        else{
            evenS+=a[i];
        }
   }
   even.push_back(evenS);

   //Now its time to calculate for odd and even from i=1 and i=2 
   
   //For odd
   for(int i=1;i<n-1-i;i+=2){
    odd.push_back(odd.back()-2*a[i]+2*a[n-i-1]);
   }

   //For even
   for(int i=2;i<n-2-i;i+=2){
    even.push_back(even.back()-2*a[i]+2*a[n-i-1]);
   }

   //Print the result
   for(int i=0;i<even.size();i++){
        cout<<odd[i]<<" "<<even[i]<<" ";
   }

   if(tempN&1==1){
        cout<<odd.back();
   }
   cout<<endl;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}