#include<bits/stdc++.h>
using namespace std;
#define read(v) for(int &i:v) cin>>i;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        
        //input
        vector<int> a(n);
        read(a);

        int l=0,r=n-1;
       vector<int> res(n);
       int prev=-1;

       for(int turn=0;turn<n;turn++){
        bool takeLeft=0;
        if(turn%2==1){
            takeLeft=a[l]>a[r]; //take maxi
        }
        else{
            takeLeft=a[l]<a[r]; //take mini
        }

        if(takeLeft){
            cout<<"L";
            l++;
        }
        else{
            cout<<"R";
            r--;
        }
       }

       cout<<endl;
    }
}