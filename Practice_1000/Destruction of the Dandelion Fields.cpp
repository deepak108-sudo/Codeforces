#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;

        //on with one odd and cut all even
        vector<int> odds;
        bool odd=false;
        int sumEven=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x%2==0) sumEven+=x;
            else {
                odd=true;
                odds.push_back(x);
            }
        }

        int ans=0;
        if(odd) ans+=sumEven;
        else{
            cout<<0<<endl;
            return;
        }

        sort(odds.begin(),odds.end(),greater<int>());
        ans+=odds[0];
        
        int cnt=((odds.size()-1)/2);
        int i=1;
        while(cnt--){
            ans+=odds[i];
            i++;
        }

        cout<<ans<<endl;
}

signed main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}