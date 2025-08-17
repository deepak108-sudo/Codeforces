#include<bits/stdc++.h>
using namespace std;
long long cal(int l,int k){
    long long ans=1,cnt=1;
    while(l!=k){
        cnt+=1;
        ans+=(cnt);
        l--;
    }
    return ans;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n,k,q; cin>>n>>k>>q;

        //Taken input
        vector<int> a(n);
        for(int &i:a) cin>>i;

        int i=0,j=0;
        long long cnt=0;
        while(j<n){
            while(j<n && a[j]<=q){
                j++;
            }
            int len=j-i;
           // cout<<len<<"----"<<endl;

            if(len>=k)
                cnt+=cal(len,k);

            while(j<n && a[j]>q){
                j++;
            }
            i=j;
        }

        cout<<cnt<<endl;
    }
}