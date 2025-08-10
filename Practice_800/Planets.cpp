#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,c; cin>>n>>c;

        vector<int> a(n);
        unordered_map<int,int> mp;

        //Taken input
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }

        int ans=0;
        //Calculation
        for(auto p:mp){
            int oneByOne=p.second*1;
            if(oneByOne<=c){
                ans+=oneByOne;
            }
            else{
                ans+=c;
            }
        }

        //Show output
        cout<<ans<<endl;
    }
}