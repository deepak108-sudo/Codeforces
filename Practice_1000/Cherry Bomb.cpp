#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    int temp=t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> a(n);
        vector<int> b(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        //Case 1: Check the validity
        int fixed=-1;
        bool f=true;
        unordered_set<int> st;
        for(int i=0;i<n;i++){
            if(b[i]!=-1){
                int c=a[i]+b[i];
                
                if(st.empty()){
                    st.insert(c);
                    fixed=c;
                }
                else{
                    if(!st.count(c))
                        f=false;
                }
            }
        }
        //cout<<"reached "<<temp-t<<endl;

        if(f==false){
            cout<<0<<endl;
            continue;
        }
        
        //Case 2: fixed not set mean all -1
        int maxi=*max_element(begin(a),end(a));
        int mini=*min_element(begin(a),end(a));
        int mx=maxi-mini;
        if(fixed==-1){
            cout<<k-mx+1<<endl;   //one for 0
            continue;
        }
        
        //Case 3: Complementary not possible 
        f=false; 
        for(int i=0;i<n;i++){
            if(a[i]>fixed || fixed-a[i]>k){
                cout<<0<<endl;
                f=true;
                break;
            }
        }

        if(f==true) continue;
        
        //At last the value 
        cout<<1<<endl;
    }
}