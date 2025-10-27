#include<bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
   int n; cin>>n;
   vector<int> a(n);
   for(int &i:a) cin>>i;

   int total=accumulate(begin(a),end(a),0);

   vector<vector<bool>> dp(n,vector<bool>(total+1,false));

   dp[0][0]=true;
   dp[0][a[0]]=true;

   
   for(int i=1;i<n;i++){
        for(int curr_sum=0;curr_sum<=total;curr_sum++){
            dp[i][curr_sum]=dp[i-1][curr_sum];
            
            int prev_sum=curr_sum-a[i];
            if(prev_sum>=0 && dp[i-1][prev_sum]) {
                dp[i][curr_sum]=true;
            }
        }
   }

   //count no. of trues;
   int cnt=0;
   for(int sum=1;sum<=total;sum++){
        if(dp[n-1][sum]) cnt++;
   }

    //now traverse
    cout<<cnt<<endl;
    for(int sum=1;sum<=total;sum++){
        if(dp[n-1][sum]) cout<<sum<<" ";
    }
}