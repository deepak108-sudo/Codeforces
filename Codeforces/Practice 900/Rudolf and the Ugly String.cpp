#include<bits/stdc++.h>
using namespace std;

bool isValid(char ch){
    return (ch=='m' || ch=='a' || ch=='p');
}

bool isValid2(char ch){
    return (ch=='p' || ch=='i' || ch=='e');
}

//TODO

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s;   cin>>s;
        s.push_back('!');

        //Map
        map<char,int> mp;

        int ans=0;

        int mini=n+1;
        for(int i=0;i<s.size();i++){
            char ch=s[i];

            
            if(mp.size()==3 && (!isValid(ch) || ch=='m' || ch=='a')){ 
                int mini=n+1;
                for(auto p: mp){
                    mini=min(mini,p.second);
                }
                ans+=mini;
                
                mp.clear();
            }

            if(isValid(ch)){
                mp[ch]++;
            }
        }


        //pie
        map<char,int> mp2;

        int ans2=0;

        for(int i=0;i<s.size();i++){
            char ch=s[i];

            
            if(mp2.size()==3 && (!isValid2(ch) || ch=='p' || ch=='i')){ 
                int mini=n;
                for(auto p: mp){
                    mini=min(mini,p.second);
                }
                ans2+=mini;
                
                mp2.clear();
            }

            if(isValid2(ch)){
                mp2[ch]++;
            }
        }


        cout<<ans+ans2<<endl;
    }
}