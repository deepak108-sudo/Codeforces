#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;

        //Take input
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];

        //For all
            int ans=INT_MAX;
            for(int i=0;i<n;i++){
                int temp=a[i]%k;

                if(temp==0){
                    ans=temp;
                    break;
                }

                ans=min(ans,(k-temp));
            }
        
            //Special case for 4
            int four=0;
        if(k==4 && ans!=0){
            int mini=INT_MAX;
            //To find only divisible by 4
            int zero=0;
            int one=0;
            for(int i=0;i<n;i++){
                int temp=a[i]%2;

                if(temp==0){
                    zero++;
                }
                else if(temp==1){
                    one++;
                }
            }
            if(zero>=2){
                four=0;
            }
            else if(one>=1 && zero>=1){
                four=1;
            }
            else{
                four=2;
            }

        }
        
        if(k==4){
            cout<<min(four,ans)<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }
}

        