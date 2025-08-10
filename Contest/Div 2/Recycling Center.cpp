#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,c; cin>>n>>c;
        vector<int> a(n);

        for(int i=0;i<n;i++) 
        {
            cin>>a[i];
        }

        sort(begin(a),end(a));

        int ans=0;
        
        while(!a.empty()){
            
            multiset<int> st;
                for(int i=0;i<a.size();i++) 
                {
                // cin>>a[i];
                    if(a[i]>c)
                    st.insert(a[i]);
                }

                ans+=st.size();
                int size=st.size();

                while(size--){
                    a.pop_back();
                }
                
                if(a.size()<0) break;
    
                if(a.size()>0) a.pop_back();
    
                for(int i=0;i<a.size();i++){
                    a[i]*=2;
                }
            }

        
       
        
        cout<<ans<<endl;
    }
}