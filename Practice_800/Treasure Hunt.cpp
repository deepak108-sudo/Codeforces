#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int x,y,t; cin>>x>>y>>t;
        
        //t%(x+y) <---- Remaining after playing to whole total played game t/(x+y)
        if(t%(x+y)<x){ //ended by second 
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
}