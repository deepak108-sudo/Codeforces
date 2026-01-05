#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);
        
        pair<int,int> flag;
        flag.first=false;
        flag.second=false;

        for(int &i:a) {
            cin>>i;
            if(i&1==1){
                flag.first=true;
            }
            else{
                flag.second=true;
            }
        }

        if(!(flag.first && flag.second)){
            for(auto &num:a){
                cout<<num<<" ";
            }
        }
        else{
            sort(begin(a),end(a));
            for(int &num:a){
                cout<<num<<" ";
            }
        }

        cout<<endl;

        
    }
}