#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;


int main(){
    int n,x; cin>>n>>x;
    vector<pair<int,int>> books(n);

    vector<int> cost(n);
    vector<int> page(n);

    for(int &i:cost) cin>>i;
    for(int &i:page) cin>>i;

    //table: dp[i][j]  most no. of pages that can be bought from i books by spending atmost j money
    vector<vector<int>> dp(n+1,vector<int>(x+1,0));

    for(int i=1;i<=n;i++){
        int curr_cost=cost[i-1];
        int curr_page=page[i-1];

        for(int price=1;price<=x;price++){
            dp[i][price]=dp[i-1][price];

            if(curr_cost<=price){
                dp[i][price]=max(dp[i][price],dp[i-1][price-curr_cost]+curr_page);
                //Here price-curr_cost: Remaining money i will pick most pages in above
            }
        }

    }
    cout<<dp[n][x];
}