#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,m, a,b;
    cin>>n>>m>>a>>b;

    int rowU=abs(a-1), rowD=abs(a-n);
    int colL=abs(b-1), colR=abs(b-m);
    //cout<<rowU<<" "<<rowD<<" "<<colL<<" "<<colR<<endl;

    //cout<<colR<<endl;

    int rowMax=max(rowU,rowD);
    int colMax=max(colL,colR);

    //cout<<rowMax<<" "<<colMax<<endl;
    int tempN=n;
    int tempM=m;

        tempN-=rowMax;
    

    int res=1;
    while(tempM>1){
        res++;
        tempM=ceil(tempM/2.0);
    }
    while(tempN>1){
        res++;
        tempN=ceil(tempN/2.0);
    }

    //col
    m-=colMax;
    //cout<<n<<" "<<m<<endl;

    int ans=1;

    while(n>1){
        ans++;
        n=ceil(n/2.0);
        //cout<<n<<endl;
    }
    //cout<<"-----"<<endl;

    while(m>1){
        ans++;
        m=ceil(m/2.0);
        //cout<<m<<endl;
    }
    cout<<min(ans,res)<<endl;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}