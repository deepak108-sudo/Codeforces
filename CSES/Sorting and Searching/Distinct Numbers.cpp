#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){

    int n; cin>>n;
    set<int> st;

    int x;
    for(int i=0;i<n;i++){
        cin>>x; st.insert(x);
    }

    cout<<st.size()<<endl;
}