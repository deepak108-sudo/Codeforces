#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;

        string s; cin>>s;
        string rev=s;
        reverse(begin(rev),end(rev));
        vector<int> mp(26,0);

        //Count character
        for(char ch:s){
            mp[ch-'a']++;
        }

        //Handling same digits
        int count=0;
        for(int &i:mp){
            if(i!=0) count++;
        }

        if(count==1){
            cout<<"NO"<<endl;
            continue;
        }

        //Handling already universal
        if(s<rev){
            cout<<"YES"<<endl;
            continue;
        }
        
        //We can't swap and not universal
        if(k==0 && s>=rev){
            cout<<"NO"<<endl;
            continue;
        }

        //MAin: not universal and we can swap
        vector<int> prefix(26,0);
        prefix[0]=0;
        for(int i=1;i<26;i++){
            if(mp[i-1]!=0) {
                for(int j=i;j<26;j++) 
                    prefix[j]=1;
                break;
            }
        }

        bool f=false;
        for(int i=0;i<n;i++){
            if(prefix[s[i]-'a']==1){
                f=true;
                break;
            }
        }

        if(f==true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}