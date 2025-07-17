#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> a(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int i=0;
        int count=0,ans=0;

        while(i<n){
            if(a[i]==1) count=0;
            else{
                count++;
                if(count==k){
                    ans++;
                    count=0;
                    i+=2;
                    continue;
                } 
            }
            i++;
        }

        cout<<ans<<endl;
    }
}