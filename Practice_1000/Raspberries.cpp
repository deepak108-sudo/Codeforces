#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;

        //Take input
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];

        //For all k
        int ans=INT_MAX;
        for(int i:a)
            ans=min(ans,((k-(i%k))%k));

        //To handle 4
        if(k==4){
            int even_cnt=count_if(begin(a),end(a),[](int x){ return x%2==0;});

            ans=min(ans,max(0,2-even_cnt));
        }

        cout<<ans<<endl;
    }
}

        