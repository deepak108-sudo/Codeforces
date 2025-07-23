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
            for(int x:q){
                while(x!=a[i]){
                    ans.push_back(a[i]);
                    q.erase(a[i]);
                    break;
                }
            }
            
        }

        for(auto &i:ans) cout<<i<<" ";
        cout<<endl;
    }
}
