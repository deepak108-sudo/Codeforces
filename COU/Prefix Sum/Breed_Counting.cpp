#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    freopen("bcount.in", "r", stdin);
	freopen("bcount.out", "w", stdout);
    
    int n,q; cin>>n>>q;
    int one[n]={0},two[n]={0},three[n]={0};

    int x; cin>>x;
    //x-=1; //to convert 0 indexed
    if(x==1) one[0]=1;
    else if(x==2) two[0]=1;
    else three[0]=1;

    //calculate the prefix
    for(int i=1;i<n;i++){
        one[i]=one[i-1];
        two[i]=two[i-1];
        three[i]=three[i-1];

        cin>>x;
        if(x==1)
            one[i]=one[i-1]+1;

        else if(x==2) two[i]=two[i-1]+1;
        
        else three[i]=three[i-1]+1;
    }

    //process the query
    for(int i=0;i<q;i++){
        int l,r; cin>>l>>r;
        l--;
        r--;
        if(l==0){
            cout<<one[r]<<" "<<two[r]<<" "<<three[r]<<endl;
            continue;
        }
        cout<<one[r]-one[l-1]<<" "<<two[r]-two[l-1]<<" "<<three[r]-three[l-1]<<endl;
    }
}