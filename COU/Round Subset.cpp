#include<bits/stdc++.h>
using namespace std;
#define int long long
int n;


int maxi=0;
int k;

int countZ(vector<int> temp){
    int p=1;
    for(int i=0;i<(int)temp.size();i++){
        p*=temp[i];
    }

    string s=to_string(p);
    int z=0;
    for(int i=(int)s.size()-1;i>=0;i--){
        if(s[i]=='0') z++;
    }

    return z;
}


vector<vector<int>> dp;

void solve(int i, int picked, vector<int>& temp, vector<int>& a) {
    if (picked == k) {
        int zero = countZ(temp);
        maxi = max(maxi, zero);
        return;
    }
    if (i == a.size()) return; // end of array

    if (dp[i][picked] != -1) return;
    dp[i][picked] = 1;

    // pick a[i]
    temp.push_back(a[i]);
    solve(i+1, picked+1, temp, a);
    temp.pop_back();

    // skip a[i]
    solve(i+1, picked, temp, a);
}


signed main(){
    int t; cin>>t;
    while(t--){
        cin>>n>>k;
dp.assign(n+1, vector<int>(k+1, -1));

        vector<int> a(n);
        for(int &i:a) cin>>i;

        vector<int> temp;
        
        solve(0,0,temp,a);

    }
    cout<<maxi<<endl;
}