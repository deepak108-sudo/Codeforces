#include<bits/stdc++.h>
using namespace std;

void solve(){
     int n,k; cin>>n>>k;
        string s; cin>>s;

        int cnt=0,total1=0;
        for(char &ch:s){
            if(ch=='1'){
                cnt++;
                total1++;
            }
            else{
                if(cnt>=k){
                    cout<<"NO"<<endl;
                    return;
                }
                cnt=0;
            }
        }
        if(cnt>=k){
                    cout<<"NO"<<endl;
                    return;
                }


        //handle yes part
        int cnt1=1,cnt0=total1+1;
        cout<<"YES"<<endl;
        
        for(char &ch:s){
            if(ch=='1') cout<<cnt1++<<" ";
            else cout<<cnt0++<<" ";
        }
        cout<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}