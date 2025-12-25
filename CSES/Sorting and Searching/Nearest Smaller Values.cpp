#include<bits/stdc++.h>
using namespace std;
#define int long long
 
signed main(){
    int n; cin>>n;
    vector<int> a(n);
    for(int &i:a){
        cin>>i;
    }
 
    vector<int> ans(n,0);
    stack<pair<int,int>> st;
    for(int i=n-1;i>=0;i--){
       
            while(!st.empty() && st.top().first>a[i]){
                if(i==0){
                    ans[st.top().second]=-1;
                }
                else{
                    ans[st.top().second]=i;
                }
                st.pop();
            }
        
        st.push(make_pair(a[i],i));
    }
 
    //Iterate and get ans
    for(int i=0;i<n;i++){
        if(ans[i]==0){
            cout<<0<<" ";
            continue;
        }
        if(ans[i]==-1) cout<<1<<" ";
        else cout<<ans[i]+1<<" ";
    }
}