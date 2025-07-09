#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int x; cin>>x;
        int ans=0;

        int a1,a2,a3;
        a1=a2=a3=0;

        while(min({a1,a2,a3})<x){
            if(a1<=a2 && a1<=a3){
                a1=2*min({a2,a3})+1;
            }
            else if(a2<=a1 && a2<=a3){
                a2=2*min({a1,a3})+1;
            }
            else{
                a3=2*min({a1,a2})+1;
            }

            ans++;
        }
        cout<<ans<<endl;

    }
}