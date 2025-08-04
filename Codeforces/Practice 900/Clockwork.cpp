#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);

        for(int &i:a) cin>>i;

        //Process
        bool f=true;
        for(int i=0;i<n;i++){
            int leftD=2*i;
            int rightD=2*(n-i-1);

            if(a[i]<=max(leftD,rightD)){
                f=false;
                break;
            }
        }

        if(f==true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}