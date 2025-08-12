#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int l,L,r,R; cin>>l>>r>>L>>R;
        int ans=0;
        
        int inter=min(R,r)-max(l,L);

        if(inter<0){
            ans=1;  //n0 overlap
        }
        else{
            ans=inter;
            if(l!=L) ans++;
            if(r!=R) ans++;
        }
        cout<<ans<<endl;
    }
}