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

        int initial=a[k-1];

        set<int> st(a.begin(),a.end()); //We don't need repeated
        vector<int> h;

        //Updated Height
        for(int x:st)
            if(x>=initial) h.push_back(x);   //We only need greater than a[k-1]
        
        int waterLevel=1;
        bool f=true;

        for(int i=0;i<h.size()-1;i++){
            int teleTime= h[i+1]-h[i];
            int timeToReachWater=h[i]-waterLevel+1;
            
            if(timeToReachWater<teleTime)
                {
                    f=false;
                    break;
                }
            
            waterLevel+=teleTime;
        }

        cout<<((f) ? "YES" : "NO")<<endl;

    }
}