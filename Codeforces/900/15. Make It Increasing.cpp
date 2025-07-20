#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);
        
        for(auto &num:a) cin>>num;
        int ans=0;
        
        for(int i=n-1; i>0;i--){
                while(a[i-1]>=a[i]){
                    ++ans;
                    a[i-1]/=2;

                    if(a[i-1]==0 && a[i]==0){
                        ans=-1;
                        break;
                    }
                }
        }

        cout<<ans<<endl;
    }
}