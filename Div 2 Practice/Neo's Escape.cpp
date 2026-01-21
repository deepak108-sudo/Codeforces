#include<bits/stdc++.h>
using namespace std;
#define int long long 

void solve(){
    int n; cin>>n;
    vector<int> a(n);

    for(int &i:a) cin>>i;

    //Remove cons. number
    vector<int> vec;
    for(int i=0;i<n;i++){
        if(i==0 || a[i]!=a[i-1]){
            vec.push_back(a[i]);
        }
    }

    //Find total peaks
    int m=vec.size();
    int peaks=0;

    //checking 
    // for(int &i:vec) cout<<i<<" ";
    // cout<<endl;

    //Edge cases
    if(m>2){
        if(vec[0]>vec[1]){
            peaks++;
        }
        if(vec[m-1]>vec[m-2]){
            peaks++;
        }

    }

    for(int i=1;i+1<m;i++){
        // cout<<"values of i:"<<i<<endl;

        if((vec[i]>vec[i-1] && vec[i]>vec[i+1])){
            // cout<<vec[i-1]<<"---"<<vec[i]<<"---"<<vec[i+1]<<endl;
            peaks++;
        }
    }

    //Showing result
    cout<<max(1LL,peaks)<<endl;
}

signed main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}