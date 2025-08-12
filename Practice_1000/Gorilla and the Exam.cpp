#include<bits/stdc++.h>
using namespace std;
// Important test case 1,1,2,3,3,4 
int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;

        vector<int> a(n);
        vector<int> cnt={1};

        //Taking input
        for(int &i:a) cin>>i;
        
        //Finding frequency
        for(int i=1;i<n;i++){
            if(a[i]==a[i-1])
                cnt.back()++;
            else 
                cnt.emplace_back(1);
        }

        //
        bool printed=false;
        sort(begin(cnt),end(cnt));

        int m=cnt.size();
        for(int i=0;i<m-1;i++){
            if(cnt[i]>k){

                cout<<m-i<<"\n";
                printed=true;
                break;
            }
            k-=cnt[i];
        }

        if(!printed) cout<<1<<"\n";
    }
}


