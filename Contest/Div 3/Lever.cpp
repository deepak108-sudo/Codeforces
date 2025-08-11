#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);
        vector<int> b(n);

        for(int &i:a) cin>>i;
        for(int &i:b) cin>>i;

        int cnt=0;
        
        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                cnt+=(a[i]-b[i]);
            }
        }

        cout<<cnt+1<<endl;
    }
}