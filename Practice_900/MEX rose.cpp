#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int n,k; cin>>n>>k;

        int mn=0;
        vector<int> a(n),cnt(k,0);
        for(int &i:a) {
            cin>>i;
            if(i==k) mn++;
            if(i<k)
            cnt[i]++;
        }

        //check which is missing
        int ans=0;
        for(int &i:cnt)
            if(i==0)
                ans++;
    
            cout<<max(ans,mn)<<endl;
    }
}