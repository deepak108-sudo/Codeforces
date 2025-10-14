#include<bits/stdc++.h>
using namespace std;
using ll=long long;
vector<int> dp;

set<int> getDigits(int n){
    set<int> digits;
    while(n!=0){
        digits.insert(n%10);
        n/=10;
    }
    return digits;
}

int mini=0;
int solve(int n){
    if(n==0){
        return 0;
    }

    if(dp[n]!=-1){
        return dp[n];
    }

    if(n<0){
        return 1000000;
    }

   int min_step=1000000;
    set<int> digits=getDigits(n);
    for(auto d:digits){
        //n-=d;
        if(d==0) continue;
        int curr_step=1+solve(n-d);
        min_step=min(curr_step,min_step);
        //n+=d;
    }
    
    return dp[n]=min_step;
}
int main(){
    int n; cin>>n;
    dp.assign(n+1,-1);

    cout<<solve(n);
}