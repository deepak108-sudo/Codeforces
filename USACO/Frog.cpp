#include<bits/stdc++.h>
using namespace std;
#define read(v) for(int &i:v) cin>>i;
int n;
vector<int> a;
vector<int> dp;

int solve(int i){
    if(i==n-1){
        return 0;
    }

    if(dp[i]!=-1){
        return dp[i];
    }

    int take1=INT_MAX;
    int take2=INT_MAX;

    if(i<n-1)
        take1=abs(a[i+1]-a[i])+solve(i+1);

    if(i<n-2)
        take2=abs(a[i+2]-a[i])+solve(i+2);

    return dp[i]=min(take1,take2);
}


int main(){
    cin>>n;
    a.resize(n);
    dp.resize(n,-1);

    //take input
    read(a);

    cout<<solve(0);
}
