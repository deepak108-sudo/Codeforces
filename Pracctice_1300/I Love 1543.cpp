#include<bits/stdc++.h>
using namespace std;
#define int long long

//Function to extract layers like we pill potato
string getLayer(vector<string> &a,int n,int m,int k){
    string s;
    int top=k;
    int right=m-k-1;
    int bottom=n-k-1;
    int left=k;

    //left to right
    for(int i=left;i<right;i++)
        s.push_back(a[top][i]);

    //up to down
    for(int j=top;j<bottom;j++)
        s.push_back(a[j][right]);

    //right to left
    //if(bottom>top)
    for(int i=right;i>left;i--)
        s.push_back(a[bottom][i]);

    //down to up
    //if(left<right)
    for(int i=bottom;i>top;i--)
        s.push_back(a[i][left]);

    return s;
}

void solve(){
    int n,m; cin>>n>>m;
    vector<string> a(n);

    //Taking input
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int ans=0;
    int layers=min(n,m)/2;
    for(int k=0;k<layers;k++){
        string s=getLayer(a,n,m,k);
        
        if(s.size()>=4){
            s+=s.substr(0,3);
        }

        //comparing
        string target="1543";
        for(int i=0;i<=s.size()-4;i++){
            if(s.substr(i,4)==target) ans++;
        }
    }

    cout<<ans<<endl;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}