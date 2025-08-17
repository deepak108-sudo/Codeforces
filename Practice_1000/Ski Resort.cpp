#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,k,q; cin>>n>>k>>q;

        //Taken input
        vector<int> a(n);
        for(int &i:a) cin>>i;

        //Process
        int len=0;
        long long ans=0;
        for(int i=0;i<n;i++){
            if(a[i]<=q){
                len++;
            }
            else{
                if(len>=k)
                    ans+=(len-k+1)*(len-k+2LL)/2;

                len=0;
            }
        }

        //Last calculation
        if(len>=k)
            ans+=(len-k+1)*(len-k+2LL)/2;
        

        cout<<ans<<endl;
    }
}