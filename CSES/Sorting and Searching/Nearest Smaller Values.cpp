#include<bits/stdc++.h>
using namespace std;
#define int long long
 
signed main(){
    int n; cin>>n;
    vector<int> a(n);
    for(int &i:a){
        cin>>i;
    }
 
    stack<pair<int,int>> st;
    for(int i=0;i<n;i++){
        //If not increasing
        while(!st.empty() && st.top().first>=a[i]){
            st.pop();
        }

        if(st.empty())
            cout<<0<<" ";
        else
            cout<<st.top().second<<" ";

        st.push({a[i],i+1});
    }
}