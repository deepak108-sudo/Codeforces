#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,s; cin>>n>>s;

        //Taken input
        vector<int> a(n);

        //Frequency
        vector<int> f(3,0);
        for(int &i:a) {
            cin>>i;
            f[i]++;
        }
        
        int sum=f[1]+2*f[2];
        //if s<sum then not able to reach
        //if s-sum==1 then we will try this arrangement
        if(s<sum || (s-sum)==1){
            while(f[0]--) cout<<"0 ";
            while(f[2]--) cout<<"2 ";
            while(f[1]--) cout<<"1 ";
        }
        else{
            cout<<-1;
        }
        cout<<endl;
    }
}