#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        vector<int> a(n);
        int maxi=1;

        for(int i=0;i<n;i++){
            cin>>a[i];
            maxi=max(maxi,a[i]);
        }

        //Each operation
        while(m--){
            char c; cin>>c;
            int l,r; cin>>l>>r;

            if(maxi>=l && maxi<=r)
            {
                if(c=='+')
                    maxi=maxi+1;

                else
                    maxi=maxi-1;

                cout<<maxi<<" ";
            }
            else
                cout<<maxi<<" ";
        }
        cout<<endl;
    }
}