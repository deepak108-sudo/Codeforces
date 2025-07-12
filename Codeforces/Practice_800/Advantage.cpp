#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;

        vector<int> suffixMax(n,0);
        vector<int> a(n);

        for(int i=0;i<n;i++) cin>>a[i];

        //Find Suffix Max
        suffixMax[n-1]=0;
        for(int i=n-2;i>=0;i--){
            suffixMax[i]=max(suffixMax[i+1],a[i+1]);
        }

        //At each index find max(leftMax and rightMax) and subtract it by that no. 
        int leftMax=0;
        for(int i=0;i<n;i++){
            if(i==0){
                cout<<a[i]-suffixMax[i]<<" ";
                continue;  
            }
            leftMax=max(leftMax,a[i-1]);

            cout<<a[i]-max(leftMax,suffixMax[i])<<" ";
        }
        cout<<endl;
    }
}