#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    int temp=t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;

        vector<int> prefix(n,0); prefix[0]=1;
        vector<int> suffix(n,0); suffix[n-1]=1;
        unordered_set<int> st;
        st.insert(s[0]);

        //Prfix Distinct
        for(int i=1;i<n;i++){
            if(st.count(s[i])){
                prefix[i]=prefix[i-1];
            }else{
                prefix[i]=prefix[i-1]+1;
                st.insert(s[i]);
            }
        }

        //Suffix distiinct
        st.clear();
        st.insert(s[n-1]);

        for(int i=n-2;i>=0;i--){
            if(st.count(s[i])){
                suffix[i]=suffix[i+1];
            }else{
                suffix[i]=suffix[i+1]+1;
                st.insert(s[i]);
            }
        }

        //Finding ans
        int ans=INT_MIN;
        for(int i=0;i<n-1;i++){
            ans=max(ans,prefix[i]+suffix[i+1]);
        }

        cout<<ans<<endl;
    }

}