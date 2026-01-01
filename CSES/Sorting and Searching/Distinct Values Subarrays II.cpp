#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,k; cin>>n>>k;

    vector<int> a(n);
    for(int &i:a) cin>>i;
    
    map<int,int> mp;
    int ans=0;

    //whenever we are our no. of element in map increase we are neutralizing it by erasing it
    int left=0,right=0;
    while(right<n){
        mp[a[right]]++;

        while((int)mp.size()>k){
            mp[a[left]]--;
            if(mp[a[left]]==0)
                mp.erase(a[left]);
            left++;
        }
    

        ans+=(right-left+1);
        
        right++;
    }
    cout<<ans<<endl;
}