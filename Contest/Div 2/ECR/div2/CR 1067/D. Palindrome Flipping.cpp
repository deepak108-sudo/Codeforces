#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> pi;
typedef vector<pi> vpi;

//To convert or flip all bit to zero
vpi go(string s){
    vpi ans;
    int N=s.size();

    while(true){
        bool allZeros=true;
        for(char &ch:s){
            if(ch=='1') {
                allZeros=false;
                break;
            }
        }
    
        //If reached or already reached to all zero postion then break from loop
        if(allZeros==true) break;

        //By default
        int L=0,R=2; //default to break alternating case
        for(int i=0;i+1<N;i++){
            if(s[i]==s[i+1]){
                L=i;
                R=i;

                int k=i+1;
                while(k<N && s[k++]==s[i]) R++;
                break;
            } 
        }

        //Now its turn to flipping
        for(int i=L;i<=R;i++){
            s[i]='1'+'0'-s[i];
        }

        ans.push_back({L,R});
    }
    return ans;
}

void solve(){
   int n; cin>>n;
   string s,t;
   cin>>s>>t;

   //First change s to 0^n
   vpi A=go(s);

   //Then transform t to 0^n later i will reverse the path
   vpi B=go(t);

   //Now reverse the path of B
   reverse(begin(B),end(B));

   for(auto &num:B){
        A.push_back({num.first,num.second});
   }

   cout<<A.size()<<endl;

   //Now print the step
   for(auto &vec:A){
    cout<<vec.first+1<<" "<<vec.second+1<<endl;
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