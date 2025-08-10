#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int n,k; cin>>n>>k;

        string s; cin>>s;

        vector<int> up(26,0);
        vector<int> sm(26,0);

        //Taking frequency
        for(char ch:s){
            if(isupper(ch)){
                up[ch-'A']++;
            }
            else{
                sm[ch-'a']++;
            }
        }

        int cnt=0;
        for(int i=0;i<26;i++){
            cnt+=min(sm[i],up[i]);

            //used 
            up[i]=abs(sm[i]-up[i]);
        }

        for(int &rem:up){
            //usage of k
            if(rem%2!=0) rem-=1;

            if(k==0) break;

            if(rem>=2){
                int taken=min(k,rem/2);
                cnt+=taken;
                k-=taken;
            }
        }

        cout<<cnt<<endl;
    }
}