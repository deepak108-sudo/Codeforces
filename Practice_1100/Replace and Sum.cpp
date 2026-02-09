#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t; cin>>t;
    while(t--){
        int n,q; cin>>n>>q;
        vector<int> a(n+1),b(n);

        //Taking input array
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        
        //Query time
        vector<pair<int,int>> qr(q);
        for(int i=0;i<q;i++){
            int l,r;
            cin>>l>>r;
            
            qr[i]={l-1,r-1};
        }
        
        a[n]=0;
        for(int i=n-1;i>=0;i--){
            a[i]=max({a[i],b[i],a[i+1]});
        }
        //last elem
        // a[n-1]=max(a[n-1],b[n-1]);

        //testing
        // for(auto num:a) cout<<num<<endl;

        //prefix sum
        vector<int> prefix(n);
        prefix[0]=a[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+a[i];
        }

        //Now its query time
        for(auto &p:qr){
            if(p.first==0 || p.second==0){
                cout<<prefix[p.second]<<" ";
            }
            else
            cout<<prefix[p.second]-prefix[p.first-1]<<" ";
        }
        cout<<endl;
    }
}

