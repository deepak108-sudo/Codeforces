#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;

        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        cout<<min(abs(s-a[0]),abs(a[n-1]-s))+(a[n-1]-a[0])<<endl;
    }
}