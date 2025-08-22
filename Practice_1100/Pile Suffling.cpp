#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        
        long long ans=0;
        while(n--){
            int a,b,c,d; cin>>a>>b>>c>>d;
    
            if(b>d){
                ans+=(a+(b-d));
            }
            else if(a>c){
                ans+=(a-c);
            }

        }
        cout<<ans<<endl;
    }
}