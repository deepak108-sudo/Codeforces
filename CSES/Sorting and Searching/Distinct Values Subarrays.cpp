#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    vector<int> a(n);
    for(int &i:a) cin>>i;
    
    //Element and vector of duplicate present
    unordered_map<int,int> mp;

    int l=0;
    int ans=0;
    for(int r=0;r<n;r++){
        mp[a[r]]++;

        while(mp[a[r]]>1){  //means duplicate so shift the l part while it is present
            mp[a[l]]--;
            l++;
        }

        //No of subarray ending at r is r-l+1 in 0 based index in 1 based r-l
        ans+=(r-l+1);
    }
    cout<<ans;
    
}