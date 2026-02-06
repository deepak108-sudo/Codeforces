#include<bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
   int n; cin>>n;
   vector<int> a(n);
   for(int &i:a) cin>>i;

   set<int> st;
   for(int &num:a){
        set<int> copy=st;

        for(int s:copy) st.insert(s+num);
        st.insert(num);
   }

   //print
   cout<<st.size()<<endl;
   for(auto &s:st) cout<<s<<" ";
}