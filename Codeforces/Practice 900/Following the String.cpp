#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);

        //Taken input
        for(int &i:a) cin>>i;

        unordered_map<char,int> mp;
        unordered_map<int,char> mp1;
        stack<char> q;

        for(char ch='z';ch>='a';ch--) q.push(ch);

        vector<char> res(n);
        for(int i=0;i<n;i++){
            
            if(a[i]==0){
                int temp=q.top();
                q.pop();

                res[i]=temp;

                mp[temp]++;
                mp1[mp[temp]] = temp;
            }
            else{
                char t=mp1[a[i]];
                res[i]=mp1[a[i]];
                
                mp[t]++;
                mp1[mp[t]]=t;



            }
        }

        //Print
        for(char &ch:res) cout<<ch;
        cout<<endl;
    }
}