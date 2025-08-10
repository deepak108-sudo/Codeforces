#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,q; cin>>n>>q;
        vector<int> a(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        vector<int> prefixSum(n);
        prefixSum[0]=0;
        for(int i=1;i<n;i++){
            prefixSum[i]=prefixSum[i-1]+a[i-1];
        }

        vector<int> suffixSum(n);
        suffixSum[n-1]=0;
        for(int i=n-2;i>=0;i--){
            suffixSum[i]=suffixSum[i+1]+a[i+1];
        }


        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
            
            int num=prefixSum[l-1]+suffixSum[r-1]+k*(r-l+1);
            if(num%2==0){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
}