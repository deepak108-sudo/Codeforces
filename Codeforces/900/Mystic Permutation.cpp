#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        set<int> q;

        vector<int> a(n); 
        
        //Taking input
        for(auto &i:a) {
            cin>>i;
            q.insert(i);
        }

        vector<int> ans;

        for(int i=0;i<n;i++){
                bool f=false;

                for(auto it=q.begin(); it!=q.end(); ++it){

                    if(*it!=a[i]){
                        ans.push_back(*it);
                        q.erase(*it);
                        break;
                    }
                }
        }
        

        for(auto &i:ans) cout<<i<<" ";
        cout<<endl;
    }
}
