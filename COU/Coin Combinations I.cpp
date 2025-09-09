#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x; cin>>n>>x;
    
    //input
    vector<int> coins(n);
    for(int &i:coins) cin>>i;
    
    //ways initialization
    vector<int> ways(x+1,0);
    ways[0]=1;

    //Filling table
    for(int sum=1;sum<=x;sum++){
        for(int c:coins){
            if(sum-c>=0){
                ways[sum]+=ways[sum-c];
                if(ways[sum]>=mod) ways[sum]-=mod;
            }
        }
    }

    cout<<ways[x]<<endl;
}
