#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    freopen("hps.in", "r", stdin);
    freopen("hps.out", "w", stdout);
    int n; cin>>n;
    vector<int> hpref(n+1);
    vector<int> ppref(n+1);
    vector<int> spref(n+1);

    int hSum=0,pSum=0,sSum=0;
    char c;

    //Calculating Prefix
    for(int i=0;i<n;i++){
        cin>>c;
        if(c=='H') hSum++;
        else if(c=='P') pSum++;
        else sSum++;

        hpref[i]+=hSum;
        ppref[i]+=pSum;
        spref[i]+=sSum;
    }

    //Now find which is maximum
    int ans=0;
    for(int i=0;i<n;i++){
        int leftWin=max(hpref[i],max(ppref[i],spref[i]));
        int rightWin=max((hpref[n-1]-hpref[i]),max((ppref[n-1]-ppref[i]),(spref[n-1]-spref[i])));
        ans=max(ans,leftWin+rightWin);
    }

    cout<<ans<<endl;
}
signed main(){
    solve();
}