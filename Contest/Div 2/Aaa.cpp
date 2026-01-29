#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    set<int> st;

    vector<int> vec(n);
    vec[n-1]=n;
    vec[n-2]=1;

    for(int val=2;val<n;val++){
        st.insert(val);
    }

    int i=n-3;
    while(!st.empty()){
        for(auto &val:st){
            if(abs(val-vec[i+1])==i+1){
                vec[i]=val;
                st.erase(val);
                i--;
                break;
            }
        }
    }

    //Show the result
    for(int &v:vec){
        cout<<v<<" ";
    }
    cout<<endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}

