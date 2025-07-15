#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;

        vector<int> a(n);
        int max1=0,max2=0,max3=0;

        //take input
        for(int i=0;i<n;++i)
            cin>>a[i];

        int maxi=a[n-1]-a[0];

        //Don't fix first or last
        for(int i=0;i<n-1;i++)
            max1=max(max1,a[i]-a[i+1]);

        //lock first element and find 
        for(int i=1;i<n;i++)
            max2=max(max2,a[i]-a[0]);
        
        //lock last element and find 
        for(int i=0;i<n-1;i++)
            max3=max(max3,a[n-1]-a[i]);

        cout<<max({maxi,max1,max2,max3})<<endl;
    }
}
