#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
       vector<int> a(n+1);
       map<int,int> mp;

       for(int i=1;i<=n;i++) cin>>a[i];
        
       for(int i=1;i<=n;i++){
        mp[a[i]]=i;
       }


       vector<int> res(n+1);
       for(int i=1;i<=n;i++){
        res[i]=abs(i-mp[i]);
       }

       sort(begin(res)+1,end(res));

    //    for(int &ch:res) cout<<ch<<" ";
    //    cout<<endl;

       int gcd=res[n];
       for(int i=n;i>0;i--){
            if(res[i]!=0){
                gcd=__gcd(gcd,res[i]);
                if(gcd==1){
                    break;
                }
            }
       }
       cout<<gcd<<endl;
    }
}