#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        int ans=0;

        int i=0;
        while(i<n){

            if(i<=n-5 && (s.substr(i,5)=="mapie")){
                ans+=1;
                i+=5;
            }

            else if(i<=n-3 && (s.substr(i,3)=="map") || s.substr(i,3)=="pie"){
                ans+=1;
                i+=3;
            }else{
                i++;
            }
        }

        cout<<ans<<endl;

    }
}