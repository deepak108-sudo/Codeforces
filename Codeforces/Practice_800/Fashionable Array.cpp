#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        sort(begin(a),end(a));
        if(a[0]%2==a[n-1]%2){
            cout<<0<<endl;
            continue;
        }

        int i=1,j=n-2;
        while(a[0]%2==a[i]%2)   i++;
        while(a[n-1]%2==a[j]%2)   j--;

        cout<<min(i,n-1-j)<<endl;
    }
}