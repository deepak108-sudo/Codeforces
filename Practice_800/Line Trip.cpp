#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;

        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        int maxi=0;
        for(int i=0;i<n-1;i++){
            maxi=max(maxi,abs(a[i+1]-a[i]));
        }

        maxi=max({maxi,a[0],2*(x-a.back())});

        cout<<maxi<<endl;
    }
}