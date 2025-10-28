#include<bits/stdc++.h>
using namespace std;
using ll=long long;

//int dp[5001][5001];
// int dp[100][1000000+1];
int mod=1e9+7;

// int solve(int i,vector<int> &a,int x){
//     if(x<0 || i==(int)a.size()){
//         return 0;
//     }
//     if(x==0){
//         return 1;
//     }
//     if(dp[i][x]!=-1){
//         return dp[i][x];
//     }

//     ll ways=0;
//     if(x>=a[i])
//         ways+=(solve(i,a,x-a[i])); //take again and again
//     ways+=(solve(i+1,a,x));
//     return dp[i][x]=(ways%mod);
// }

int main(){
    int n,x; cin>>n>>x;
    // memset(dp,-1,sizeof(dp));
    //dp.resize(n,vector<int>(x+1,-1));
    vector<int> dp(x+1,0);

   vector<int> a(n);
   for(int &i:a) cin>>i;

   dp[0]=1;
   for(int &c:a){
    for(int w=0;w<=x;w++){
        if(w-c>=0){
            dp[w]+=dp[w-c];
            dp[w]%=mod;
        }
    }
   }

   cout<<dp[x]<<endl;

//    cout<<solve(0,a,x)<<endl;

}