#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){

            int n; cin>>n;
        
            vector<int> a(n);
            for(int &i:a) cin>>i;
        
            //Process
            int f=1;
            for(int i=0;i<n-1;i++){
                int mini=min(a[i],a[i+1]);
        
                a[i]-=mini;
                a[i+1]-=mini;
        
                if(a[i]>a[i+1]){
                    f=0;
                    break;
                }
            }
        
            if(f==0) cout<<"NO";
            else cout<<"YES";
            cout<<endl;
    }
}