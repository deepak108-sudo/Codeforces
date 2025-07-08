#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,j,k;
        cin>>n>>j>>k;

        vector<int> a(n);
        int maxi=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            maxi=max(maxi,a[i]);
        }

        cout<<((k > 1 || a[j-1]==maxi) ? "YES" : "NO")<<endl;
    }
}