#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int a,b,c,d; cin>>a>>b>>c>>d;
        if(a>b) swap(a,b);

        unordered_set<int> st1;
        for(int i=a+1;i!=b;i++){
            i=i%13;

            st1.insert(i);
        }

        unordered_set<int> st2;
        for(int i=b+1;i!=a;i++){
            i=i%13;
            
            st2.insert(i);
        }

        if((st1.count(c) && st2.count(d)) || (st1.count(d) && st2.count(c))){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}