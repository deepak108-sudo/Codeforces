#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int n=s.size();

        if(s[0]==s[n-1])    //if first and last equal then ab ans ba automatically samw
            cout<<s<<endl;
        
        else    //same it 
            {
                s[0]=s[n-1];
                cout<<s<<endl;
            }
    }
}