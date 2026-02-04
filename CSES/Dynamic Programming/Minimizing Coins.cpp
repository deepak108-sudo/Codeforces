#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,x; cin>>n>>x;
    vector<int> a(n);
    vector<int> min_sum_of(x+1,INT_MAX);

    //taking input
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //base case
    min_sum_of[0]=0;

    sort(begin(a),end(a));
    for(int sum=1;sum<=x;sum++){
        for(int j=n-1;j>=0;j--){
            if(sum-a[j]<0)
                continue;

            min_sum_of[sum]=min(min_sum_of[sum-a[j]]+1,min_sum_of[sum]);
        }
    }

    // for(int vec:min_sum_of) cout<<vec<<" ";
    // cout<<endl;
    if(min_sum_of[x]== INT_MAX){
        cout<<-1<<endl;
        return;
    }
    cout<<min_sum_of[x]<<endl;
}
signed main(){
   solve();
}