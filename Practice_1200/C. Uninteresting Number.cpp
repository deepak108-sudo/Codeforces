#include<bits/stdc++.h>
using namespace std;
 #define int long long
 string s="";

 int dp[1000001][8];

 bool solve(int i,int sum){
        if(sum%9==0){
         return true;
        }
        
        if(i==s.size()){
            return false;
        }
        if(dp[i][sum]!=-1) return dp[i][sum];


    int sq=(s[i]-'0')*(s[i]-'0');
    bool take=false;
    if(sq>=0 && sq<=9){
        take=solve(i+1,(sum-(s[i]-'0')+sq)%9);
    }

    bool skip=solve(i+1,sum);

    return dp[i][sum]=max(take,skip);
 }
void solve(){
    memset(dp,-1,sizeof(dp));

   cin>>s;

   int sum=accumulate(begin(s),end(s),0,
    [](int acc,char c){
        return (acc+(c-'0'))%9;
    });

   // cout<<sum<<endl;
    if(solve(0,sum)==true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}