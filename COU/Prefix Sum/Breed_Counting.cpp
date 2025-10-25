#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    freopen("bcount.in", "r", stdin);
	freopen("bcount.out", "w", stdout);

    int n,q; cin>>n>>q;
   vector<vector<int>> cows(n+1,vector<int>(3,0));

   for(int i=1;i<=n;i++){
        int type; cin>>type;
        cows[i][0]=cows[i-1][0]+(type==1);
        cows[i][1]=cows[i-1][1]+(type==2);
        cows[i][2]=cows[i-1][2]+(type==3);
   }

   //process query
    for(int i=0;i<q;i++){
        int start,end; cin>>start>>end;
        cout<<cows[end][0]-cows[start-1][0]<<" ";
        cout<<cows[end][1]-cows[start-1][1]<<" ";
        cout<<cows[end][2]-cows[start-1][2]<<endl;
   }
}