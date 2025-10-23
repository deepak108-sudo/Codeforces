#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> a1(n,0);
    vector<int> a2(n,0);


    for(int &i:a1) cin>>i;
    for(int &i:a2) cin>>i;

    vector<int> prev(n+1,0);
    vector<int> curr(n+1,0);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a1[i-1]==a2[j-1]){
                curr[j]=prev[j-1]+1;
            }
            else{
                curr[j]=max(prev[j],curr[j-1]);
            }
        }
        prev=curr;
    }

    //print
    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<=n;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    cout<<prev[n]<<endl;
}