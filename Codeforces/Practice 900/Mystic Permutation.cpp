#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;

        //Taking input
        vector<int> a(n); 
        set<int> st;

        for(int i=0;i<n;i++){
            cin>>a[i];
            st.insert(a[i]);
        }

        //edge case
        if(n==1){
            cout<<-1<<endl;
            continue;
        }

        //Processing
        vector<int> result(n);

        for(int i=0;i<n;i++){
            for(auto it=st.begin(); it!=st.end(); ++it){
                if(a[i]!=*it){
                    result[i]=*it;
                    st.erase(*it);
                    break;
                }
            }
            if(result[n-1]==0) result[n-1]=n;
        }

        if(a[n-1] == result[n-1]){
            result[n-1]=result[n-2];
            result[n-2]=n;
        }

        //Print
        for(auto &i:result)
            cout<<i<<" ";
        cout<<endl;
    }
}
