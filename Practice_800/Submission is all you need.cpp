#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int ans=0;

        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            ans+=(x+(x==0));
        }

        cout<<ans<<endl;
    }
}