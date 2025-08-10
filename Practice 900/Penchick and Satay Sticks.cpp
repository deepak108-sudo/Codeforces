#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);

        for(int &i:a) cin>>i;

        //Applying operation
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1] && a[i]-a[i+1]==1){
                swap(a[i],a[i+1]);
            }
        }

        //Check
        bool f=true;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                f=false;
                break;
            }
        }

        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}