#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> res(2*n+1,0);
        vector<vector<int>> a(n,vector<int>(n));

        int sum=(2*n)*((2*n)+1)/2;

        //Taken input
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];

                res[i+j+2]=a[i][j];
            }
        }
        
        //finding sum of dummy
        int tSum=accumulate(res.begin(),res.end(),0);

        //Print
        for(int i=1;i<=2*n;i++){
            if(res[i]==0) cout<<sum-tSum<<" ";
            else{
                cout<<res[i]<<" ";
            }
        }
        cout<<endl;
    }
}