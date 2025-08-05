#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        set<int> st;

        for(int i=0;i<n;i++) st.insert(i);

        int cnt=0;
        auto it=st.begin();

        while(it!=st.end()){
            int i=*it;

            if(s[i]=='A' && s[i+1]=='B'){
                swap(s[i],s[i+1]);
                st.erase(i);
                
                cnt++;
                it=st.begin();
                continue;
            }
            it++;
        }

        cout<<cnt<<endl;
    }
}