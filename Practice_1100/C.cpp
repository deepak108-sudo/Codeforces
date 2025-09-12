#include<bits/stdc++.h>
using namespace std;

void solve(){
   long long a,b; cin>>a>>b;
    if(b==1){
        cout<<-1<<endl;
        return;
    }

   if(b%2!=0 && a%2==0){
    cout<<-1<<endl;
    return;
   }

   long long maxi=LLONG_MIN;
   if(b%2==0){
    while(b!=0){
        long long res=a*2 + (b/2);
        maxi=max(maxi,res);
        b/=2;
        a*=2;
    }
   }
   else{
        long long res=a*b +1;
        maxi=res;
   }

   if(maxi==LLONG_MAX){
    cout<<-1<<endl;
   }
   else{
    cout<<maxi<<endl;
   }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}

