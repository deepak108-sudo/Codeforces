#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;

int main(){
    int n,x; cin>>n>>x;

    //Input
    vector<int> coins(n);
    for(int &i:coins)
        cin>>i;

    sort(begin(coins),end(coins));

    vector<int> ways(x+1,0);
    ways[0]=1;

    for(int sum=1;sum<=x;sum++){
        for(int c:coins){
            if(c>=sum && sum-c>=0){
                ways[sum]+=ways[sum-c];
                if(ways[sum]>=mod)
                    ways[sum]-=mod;
            }
        }
    }

    for(int i:ways) cout<<i<<" ";
    cout<<endl;

    cout<<ways[x];
}
