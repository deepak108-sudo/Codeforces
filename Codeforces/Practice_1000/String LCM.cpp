#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        string s,t; cin>>s>>t;
        int sn=s.size();
        int tn=t.size();

        if(sn>tn) {
            swap(s,t);
            swap(sn,tn);
        }

        int l=(sn*tn)/__gcd(sn,tn); //lcm

        string ans="";
        int k=0;
        for(int i=0;i<l;i++){
            ans+=(char)s[k];
            k++;
            k%=sn;
        }

        k=0;
        bool f=true;
        for(int i=0;i<l;i++){
            if(ans[i]!=t[k]){
                f=false;
                break;
            }
            k++;
            k%=tn;
        }
        
        if(f==true) cout<<ans<<endl;
        else cout<<-1<<endl;
    }
}