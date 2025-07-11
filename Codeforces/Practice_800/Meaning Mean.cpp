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

        sort(begin(a),end(a),greater<int>()); //desc

        while(a.size()!=1){
            int m=a.back(); a.pop_back();
            int n=a.back(); a.pop_back();
    
            a.push_back((m+n)/2);
        }

        cout<<a.back()<<endl;
    }
}