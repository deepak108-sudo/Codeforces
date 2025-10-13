#include<bits/stdc++.h>
using namespace std;
#define int long long 
int MOD=1e9+7;
int n,m;
vector<int> a;
vector<vector<long long>> memo;

int solve(int i,int val){
    if(i==n-1){
        return 1;
    }

    if(a[i]!=0 && a[i]!=val) return 0;

    if(memo[i][val]!=-1){
        return memo[i][val];
    }

    int cnt=0;
    for(int option=val-1;option<=val+1;option++){
        if(option>=1 && option<=m){
        
                if (a[i + 1] == 0 || a[i + 1] == option) {
                cnt = (cnt + solve(i + 1, option)) % MOD; 
            } 
    
        }
    }

    return memo[i][val]=cnt;
}


signed main(){
    //taken input
    cin>>n>>m;

    //Taken array input
    a.resize(n);
    for(int &i:a) cin>>i;
    memo.assign(n,vector<long long>(m+1,-1));

    int total=0;
    
    if(a[0]==0){
        for(int k=1;k<=m;k++){
            total=(total+solve(0,k))%MOD;
        }
    }
    else{
        total=solve(0,a[0]);
    }

    cout<<total<<endl;
}