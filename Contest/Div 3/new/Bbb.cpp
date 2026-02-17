#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> a(n+1),pos(n+1);

    for(int i=1;i<=n;i++){
        cin>>a[i];
        pos[a[i]]=i;
    }

    //Check if it is in correct position
    for(int i=1;i<=n;i++){
        if(a[i]==i) continue;   //Already in correct position

        int mini=min(pos[i],i);
        int maxi=max(pos[i],i);

        int rem=maxi/mini;
        if(maxi%mini==0 && ((rem & (rem-1))==0))    //divisble and power of 2
        {
            continue;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}

