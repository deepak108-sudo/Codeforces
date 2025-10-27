#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int n;
int dp[100+1][100000+1];

void solve(int i,vector<int> &a,int curr_sum,vector<int> &result){
    if(dp[i][curr_sum]!=-1) return;
    dp[i][curr_sum]=1;

    if(i==a.size()){
        if(curr_sum!=0)
        result.push_back(curr_sum);
        return;
    }
    
    solve(i+1,a,curr_sum+a[i],result);
    solve(i+1,a,curr_sum,result);

}

int main(){
    memset(dp,-1,sizeof(dp));
   cin>>n;
   vector<int> a(n);

   for(int &i:a) cin>>i;
   vector<int> result;

   solve(0,a,0,result);

   //print
   sort(begin(result),end(result));
   cout<<result.size()<<endl;
   for(int &i:result) cout<<i<<" ";
}