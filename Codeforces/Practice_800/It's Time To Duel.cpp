#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n;  cin>>n;
        vector<int> a(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        bool f=true;
        if(accumulate(begin(a),end(a),0)==n){
            f=false;
        }

        for(int i=0;i<n-1;i++){
            if(a[i]==0 && a[i+1]==0){
                f=false;
                break;
            }
        }

        if(f==false) cout<<"YES"<<endl; //Lying
        else cout<<"NO"<<endl;
    }
}
