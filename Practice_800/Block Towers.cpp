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

        sort(begin(a)+1,end(a));
        int target=a[0];
        
        for(int i=1;i<n;i++){
            if(a[i]>target){
                target+=(a[i]-target+1)/2;
            }
        }

        cout<<target<<endl;
    }
}