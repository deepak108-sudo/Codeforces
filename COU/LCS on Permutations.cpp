#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> a(n+1,0);
    vector<int> b(n+1,0);

    //taken input
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>b[i];

    //Stored position of a in pos[i]
    vector<int> pos(n+1,0);
    for(int i=1;i<=n;i++){
        pos[a[i]]=i;
    }

    //c[i] position of b[i] in a
    vector<int> c(n+1,0);
    for(int i=1;i<=n;i++){
        c[i]=pos[b[i]];
    }

    //Now find lis: magic happen in distinct gives lis
    vector<int> lis;
    for(int i=1;i<=n;i++){
        int p=lower_bound(begin(lis),end(lis),c[i])-begin(lis);

        if(p==lis.size()) lis.push_back(c[i]);
        else lis[p]=c[i];
    }

    cout<<lis.size()<<endl;
}