#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,m,k; cin>>n>>m>>k;
        vector<int> a(n);
        vector<int> b(m);

        for(int &i:a) cin>>i;
        for(int &j:b) cin>>j;

       vector<int> cnt(k+1,0);

       //Count presence of a
       for(int i:a) {
            if(i<=k) cnt[i] |=1;
       }

       //Count presence of b
       for(int i:b){
        if(i<=k) cnt[i] |=2;
       }

       //Count how many belong to gp1 and group2 and both
       vector<int> c(4,0);
       for(int i:cnt){
        c[i]++;
       }

       if((c[1]+c[2]+c[3]!=k) || c[1]>k/2 || c[2]>k/2){
        cout<<"NO"<<endl;
       }
       else{
        cout<<"YES"<<endl;
       }
    }
}

        