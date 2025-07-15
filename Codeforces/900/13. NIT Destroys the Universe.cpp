#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;

        int cntZero=0;

        vector<int> a(n);
        for(int i=0;i<n;i++) {
            cin>>a[i];
            if(a[i]==0) cntZero++;
        }

        //If all zero then no need to snap finger
        if(cntZero==n)  {
            cout<<0<<endl;    //0
            continue;
        }

        int left=0,right=n-1;
        while(left<n && a[left]==0)
            left++;

        while(right>=0 && a[right]==0)
            right--;

        //After covering all zero from left and right
        bool zeroFound=false;
        for(int i=left;i<=right;i++){
            if(a[i]==0) zeroFound=true; 
        }

        //Checks
        if(zeroFound==0) cout<<1<<endl;
        else cout<<2<<endl;
    }
}