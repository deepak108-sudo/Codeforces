#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;

    while(t--){
        int g,f,gk,fk;

        cin>>g>>f>>gk>>fk;

        int minG=min(g,gk);
        int minF=min(f,fk);

        if(minG>=minF)  
            cout<<"Gellyfish"<<endl;

        else
            cout<<"Flower"<<endl;

    }
    return 0;
}