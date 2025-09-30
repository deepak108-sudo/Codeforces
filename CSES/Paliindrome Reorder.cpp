#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
     //Taken input
     string a; cin>>a;
     vector<int> f(26,0);

     for(int ch:a){
        f[ch-'A']++;
     }

     //Check if more than 1 odd
     char temp;
     int cnt=0;
     for(int i=0;i<26;i++) if(f[i]%2!=0){
        cnt++;
        temp=i+'A';
     }

     if(cnt>1){
        cout<<"NO SOLUTION"<<endl;
        return 0;
     }

     string ans;
     for(int i=0;i<26;i++){
        int half=f[i]/2;
        char ch=i+'A';
        while(half--){
            ans+=ch;
        }
     }

     string right=ans;
     reverse(begin(ans),end(ans));
     
     if(cnt==1) ans+=temp;

     ans+=right;
     cout<<ans<<endl;
}