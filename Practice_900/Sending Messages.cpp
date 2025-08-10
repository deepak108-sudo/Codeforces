#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t; cin>>t;
    while(t--){
        int n,charge,on,onoff; 
        cin>>n>>charge>>on>>onoff;
        n+=1;

        vector<int> a(n);
        a[0]=0;

        for(int i=1;i<n;i++){
            cin>>a[i];
        }

        int i=0;
        for(;i<n-1;i++){
            int gap=a[i+1]-a[i];
            charge-=min(on*gap,onoff);
        }

        cout<<(charge>0 ? "YES" : "NO")<<endl;
    }
}