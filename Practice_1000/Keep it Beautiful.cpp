#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    int temp=t;
    while(t--){
        int n; cin>>n;

        vector<int> a(n);
        for(int &i:a) cin>>i;

        vector<int> res(n);
        res[0]=1;

        int second=a[0];
        int i=1;
        for(i=1;i<n;i++){
            if(a[i-1]<=a[i]){
                res[i]=1;
            }
            else if(a[i]<a[i-1] && a[i]<=a[0]){
                res[i]=1;
                second=a[i];
                i++;
                break;
            }
        }

        //cout<<i<<endl;
        while(i<n){
            if(a[i]>=second && a[i]<=a[0]){
                res[i]=1;
            }
            else{
                res[i]=0;
            }
            i++;
        }

        //Print
        for(int &i:res) cout<<i;
        cout<<endl;
    }
}