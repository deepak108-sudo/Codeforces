#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;

        string result;
        vector<int> mp(s.size());
        for(char &ch:s){
            mp[ch-'0']++;
        }

        for(int i=1;i<=10;i++){
            int support=10-i;
            for(int j=support;j<=9;j++){
                char num=j;
                if(mp[num]>0){
                    result.push_back(num+'0');

                    mp[num]--;
                    break;
                }
            }
        }

        cout<<result<<endl;
    }
}