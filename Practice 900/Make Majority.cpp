#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;

        vector<int> a(n);
        string s; cin>>s;

        int one=0,zero=0;
        int i=0;
        while(i<n){
            if(s[i]=='1'){
                one++;
            }
            else{
                while(i<n-1 && s[i+1]=='0'){
                    i++;
                }
                zero++;

            }
            i++;
        }

        if(one>zero) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}