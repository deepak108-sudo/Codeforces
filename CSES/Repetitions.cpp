#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
     //Taken input
     string a; cin>>a;

     int ans=1;
     int cnt=1;
     for(int i=1;i<(int)a.size();i++){
        if(a[i]==a[i-1]){
            cnt++;
            ans=max(ans,cnt);
        }
        else{
            cnt=1;
        }
     }
     
     //print
     cout<<ans<<endl;
}