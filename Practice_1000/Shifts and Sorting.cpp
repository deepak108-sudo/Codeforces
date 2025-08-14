#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int n=s.size();

        vector<int> vec(n);
        vec[0]=(s[0]=='0' ? 0 :1);

        for(int i=1;i<n;i++){
            vec[i]=vec[i-1]+s[i]-'0';
        }

        long long total=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0' && vec[i]>0){
                total+=(vec[i]+1);
            }
        }

        cout<<total<<endl;
    }
}