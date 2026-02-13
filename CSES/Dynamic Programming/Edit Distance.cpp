#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int dp[5001][5001];

int solve(string &s1,string &s2,int i,int j){
   //base case
   if(i>=s1.size()){
      return s2.size()-j;
   }
   else if(j>=s2.size()){
      return s1.size()-i;
   }

   if(dp[i][j]!=-1){
      return dp[i][j];
   }

   int add,remove,replace,equal;
   add=remove=replace=equal=0;

   if(s1[i]==s2[j]){
      equal=solve(s1,s2,i+1,j+1);
      return dp[i][j]=equal;
   }
   else{
      //Add
      add=1+solve(s1,s2,i,j+1);
      //remove
      remove=1+solve(s1,s2,i+1,j);
      //replace
      replace=1+solve(s1,s2,i+1,j+1);
   }
   return dp[i][j]=min({add,remove,replace});

}
int main(){
   string s1,s2;
   cin>>s1>>s2;
   // cout<<"hello"<<endl;
   memset(dp,-1,sizeof(dp));
   
   cout<<solve(s1,s2,0,0)<<endl;
   return 0;
}