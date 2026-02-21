#include<bits/stdc++.h>
using namespace std;
// #define int long long
int total=1e9+1;

void solve(){
   int n,m; cin>>n>>m;
   multiset<int> alice;
   multiset<int> bob;
   int x;
   for(int i=0;i<n;i++){
    cin>>x;
    alice.insert(x);
   }

   for(int i=0;i<m;i++){
    cin>>x;
    bob.insert(x);
   }

   bool turn= true;
   while(!alice.empty() && !bob.empty()){
    if(turn){
        auto xIt=prev(alice.end());
        auto yIt=prev(bob.end());

        if(*yIt<=*xIt){
            bob.erase(yIt);
        }
        else{
            int newVal=*yIt-*xIt;
            bob.erase(yIt);
            bob.insert(newVal);
        }
        turn=false;
    }
    else{
        auto xt=prev(bob.end());
        auto yt=prev(alice.end());

        if(*yt<=*xt){
            alice.erase(yt);
        }
        else{
            int newVal=*yt-*xt;
            alice.erase(yt);
            alice.insert(newVal);
        }
        turn= true;
    }
   }

   if(alice.empty()){
    cout<<"Bob"<<endl;
   }
   else{
    cout<<"Alice"<<endl;
   }
   
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}