#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &p,int i,long long s,long long temp,long long &mini){
    if(i==(int)p.size()){
        mini=min(mini,llabs(temp-(s-temp)));
        return;
    }

    solve(p,i+1,s,temp+p[i],mini);
    solve(p,i+1,s,temp,mini);
}

int main(){
    int n; cin>>n;
    vector<int> p(n);

    //taken input
    for(int &i:p) { cin>>i; }

    long long s=accumulate(begin(p),end(p),0LL);
    long long mini=LLONG_MAX;

    solve(p,0,s,0,mini);

    cout<<mini;
}
