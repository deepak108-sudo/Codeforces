#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x; cin>>n>>x;

    vector<int> cost(n),page(n);

    for(int &c:cost) cin>>c;
    for(int &p:page) cin>>p;

    //table: dp[i][j]  most no. of pages that can be bought from i books by spending atmost j money
    vector<int> dp(x+1,0);  //Optimized to 1-d

    for(int i=0;i<n;i++){
        for(int j=x;cost[i]<=j;j--){//Traversed from last to not alter the state of previous (to understand first understand with 2d technique)
                dp[j]=max(dp[j],dp[j-cost[i]]+page[i]);
                
            }
        }
    cout<<dp[x];
}