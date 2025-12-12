#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// Watch if you forgot the concept of bottom up: https://www.youtube.com/watch?v=eAG3QFsIPvo
vector<int> a;

int main(){
    int n; cin>>n;
    a.resize(n);
    
    for(int &i:a){
        cin>>i;
    }
    vector<vector<ll>> dp(n,vector<ll>(n));
    
    for(int d=0;d<n;d++){
        for(int i=0,j=d;j<n;++i,++j){
            if(d==0){
                dp[i][j]=a[i];
            }
            else if(d==1){
                dp[i][j]=max(a[i],a[j]);
            }
            else{
                ll val1=a[i]+min(dp[i+2][j],dp[i+1][j-1]);
                ll val2=a[j]+min(dp[i+1][j-1],dp[i][j-2]);

                dp[i][j]=max(val1,val2);
            }
        }
    }
    cout<<dp[0][n-1]<<endl;
}