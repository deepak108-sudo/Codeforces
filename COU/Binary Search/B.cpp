#include<bits/stdc++.h>
using namespace std;
#define int long long
int total=1e9+1;

void solve(){
    string s;
    int n;
    
    cin>>s;
    n=s.size();
    
    if(n==1) {
        cout<<1<<endl;
        return;
    }



    int star=count(begin(s),end(s),'*');
   

 for(int i=0;i+1<n;i++){
    if((s[i]=='>' && s[i+1]=='<') || (s[i]=='*'&& s[i+1]=='*') || (s[i]=='>' && s[i+1]=='*') || (s[i]=='*' && s[i+1]=='<')){
        cout<<-1<<endl;
        return;
    }
 }

 for(int i=0;i+2<n;i++){
    if((s[i]=='>' && s[i+1]=='*' && s[i+2]=='<')){
        cout<<-1<<endl;
        return;
    }
 }

//  vector<int> pre(n,0);
//  pre[0]=(s[0]=='<');

//  for(int i=1;i<n;i++){
//     if(s[i]=='<') pre[i]=pre[i-1]+1;
//     else break;
//  }

//  vector<int> suff(n,0);
//  suff[n-1]=(s[n-1]=='>');
//  for(int i=n-2;i>=0;i--){
//     if(s[i]=='>') suff[i]=suff[i+1]+1;
//     else break;
//  }

//  int maxi=*max_element(begin(pre),end(pre));
//  int maxi2=*max_element(begin(suff),end(suff));

//  cout<<max(maxi,maxi2)<<endl;
int cnt1=0;
int i=0;
while(i<n && s[i]=='<') {
    cnt1++;
    i++;
}
if(i<n && star==1 && s[i]=='*') cnt1++;

int cnt2=0;
i=n-1;
while(i>=0 && (s[i]=='>')) {
    cnt2++;
    i--;
}

if(i>=0 && star==1 && s[i]=='*') cnt2++;

cout<<max(cnt1,cnt2)<<endl;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}