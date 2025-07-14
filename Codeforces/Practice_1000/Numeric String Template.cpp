#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; 
        vector<int> a(n);

        //Taken input
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        //Taken string
        int m; cin>>m;
        
        while(m--){
            string s;
            cin>>s;
            vector<char> mp(n);
            
            if(s.size()!=n) {
                cout<<"NO"<<endl;
                continue;
            }

            //Checking for one one correspondance
            bool f=true;
            for(int j=0;j<n;j++){

                auto it=mp[a[j]];
                if(it != mp.end()){
                    if(s[j] != it->second){
                        f=false;
                        break;
                    }
                    mp[a[j]]=s[j];
                }
            }

            if(f) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}