#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;

        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];

        for(int i=1;i<n;i++){
            if(a[i-1]==1 ) a[i-1]+=1;

            if(a[i-1] && a[i]) a[i]+=1;
            
            if(a[i]%a[i-1]==0)
                a[i]+=1;
        }
    
        //Print
        for(int num:a)
            cout<<num<<" ";
        
        cout<<endl;
    }
}