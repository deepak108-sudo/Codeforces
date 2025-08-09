#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,m,k; cin>>n>>m>>k;

        //Bob will choose maximum color coloured by alice
        int max_color=ceil((float)n/m);
        int diffC=n-max_color;

        if(diffC>k)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
}