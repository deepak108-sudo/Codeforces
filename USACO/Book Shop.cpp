#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;

vector<vector<int>> dp;

int solve(vector<int> &price,vector<int> &page,int i,int sum){
    if(sum<0){
        return -1e9;
    }
    if(i==(int)page.size()){
        return 0;
    }
    if(dp[i][sum]!=-1){
        return dp[i][sum];
    }

    int take=page[i]+solve(price,page,i+1,sum-price[i]);
    int skip=solve(price,page,i+1,sum);
    
    return dp[i][sum]=max(take,skip);
}

int main(){
    int n,x; cin>>n>>x;
    vector<int> price(n);
    vector<int> page(n);

    for(int &i:price) cin>>i;
    for(int &i:page) cin>>i;

    dp.resize(n+1,vector<int>(x+1,-1));
    cout<<solve(price,page,0,x);
}