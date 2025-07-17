#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> a(n);
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int f=true;
        int waterLevel=1;
        int presentH=a[k-1];

        //Sort for binary search
        sort(begin(a),end(a));
        

        int maxi=*max_element(begin(a),end(a));

        if(maxi==presentH){
             cout<<"YES"<<endl;
             continue;
        }
            

        while(presentH<maxi)
        {
            int nextH=presentH;
            auto nextHeightIt=upper_bound(begin(a),end(a),presentH);

            if(nextHeightIt!=a.end()){
                nextH=*nextHeightIt;
            }
            else{
                f=false;
                break;
            }

            int timeTakenForTele=abs(nextH-presentH);
            int timeToReachWaterAtPresentHeight=abs(presentH-waterLevel)+1;

            if(timeToReachWaterAtPresentHeight<timeTakenForTele){
                f=false;
                break;
            }
            else{
                if(nextH==maxi){
                    f=true;
                    break;
                }

                else{
                    waterLevel+=timeTakenForTele;
                    presentH=nextH;
                }
            }

        }

        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}