#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        
        //Taking input
        for(int &i:a) cin>>i;
        for(int &i:b) cin>>i;

        //Process
        int temp=-1;
        int cnt=0;
        int target=0;
        bool f=true;

        for(int i=0;i<n;i++){
            int diff=a[i]-b[i];

            if(diff<0){
                cnt++;
                temp=i;
                target=abs(diff);
            }
            if(cnt>=2){
                f=false;
                break;
            }
        }

        //If only  one negative diff
        if(cnt==1){
            for(int i=0;i<n;i++){
                if(i==temp) continue;
                int diff=a[i]-b[i];


                if(diff<target){
                    f=false; 
                    break;
                }
            }
        }

        if(f==true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}