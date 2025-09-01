#include<bits/stdc++.h>
using namespace std;

int check(vector<int> &t,int a){
    int l=0,r=t.size()-1;
    int idx=t.size();

    while(l<=r){
        int mid=l+(r-l)/2;

        if(t[mid]>a){
            idx=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }

    return idx;
}

void solve(){
    int n; cin>>n;
    vector<int> a(n);
    int mini=n;

    for(int &i:a) cin>>i;

    vector<int> temp=a;
    sort(begin(temp),end(temp));

    for(int i=0;i<n;i++){
        int left=i;

        int rightG=check(temp,a[i]);
        int right=n-rightG;

        mini=min(mini,left+right);
    }

    cout<<mini<<endl;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}