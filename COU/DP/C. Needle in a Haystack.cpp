#include<bits/stdc++.h>
using namespace std;


void solve(){
    string s; cin>>s;
    string t; cin>>t;

    multiset<char> st;
    for(auto ch:t){
        st.insert(ch);
    }


    for(auto ch:s){
        auto it=st.find(ch);

        if(it!=st.end()){
            st.erase(it);
        }
        else{
            cout<<"Impossible"<<endl;
            return;
        }
    }

    string ans="";
    bool f=true;
    //int i=0;
    for(auto ch:st){
        ans+=ch;
    }

    int p=s.size(),q=ans.size();
    int i=0,j=0;
  //  string temp="";
    string fin="";
    while(i<q && j<p){
        if(ans[i]<s[j]){
            fin+=ans[i];
            i++;
        }
        else if(ans[i]>=s[j]){
            while(j<p && s[j]<=ans[i]){
               // cout<<"yes"<<endl;
                fin+=s[j];
                j++;
                //cout<<j<<" ";
            }
        }
    }

    //remaining
        while(i<q){
            fin+=ans[i];
            i++;
        }

        while(j<p){
            fin+=s[j];
            j++;
        }
    


    
    //ans+=s;
    cout<<fin<<endl;
}
signed main(){
  int t; 
  cin>>t;
  while(t--){
      solve();
  }
}