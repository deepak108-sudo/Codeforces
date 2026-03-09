#include<bits/stdc++.h>
using namespace std;
#define int long long
int total=1e9+1;
bool findConsA(string &s,int target){
    int n=s.size();
    int l=0,r=0;
    int A=0;
    while(r<n){
        // if(s[r]=='b') B++;
        if(A==target){
            return true;
        }
        
        if(l<n && (r-l+1)>target){
            if(s[l]=='a') A--;
            l++;
        }
        if(s[r]=='a') A++;
        r++;
    }
    return false;
}
bool findConsB(string &s,int target){
    int n=s.size();
    int l=0,r=0;
    int B=0;
    while(r<n){
       // if(s[r]=='a') A++;
       if(B==target){
           return true;
        }
        
        if(l<n && (r-l+1)>target){
            if(s[l]=='b') B--;
            l++;
        }
        if(s[r]=='b') B++;
        r++;
    }
    return false;
}

void solve(){
   int n; cin>>n;
   string s; cin>>s;

   //count no. of a's and b's
   int cntB=0,cntA=0;
   for(auto &ch:s){
     if(ch=='b') cntB++;
     else cntA++;
   }

   if(cntA==cntB){
    cout<<0<<endl;
    return;
   }
   else if(cntA>cntB){
    bool f=findConsA(s,cntA-cntB);
        if(f==true) {
            cout<<(cntA-cntB)<<endl;
            return;
        }
   }
   else{
    bool f=findConsB(s,cntB-cntA);
        if(f==true) {
            cout<<(cntB-cntA)<<endl;
            return;
        }
   }

   //If not found then print -1
   cout<<-1<<endl;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}