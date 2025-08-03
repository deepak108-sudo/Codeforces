#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int num=stoi(s);

        int root=sqrt(num);

        if(root*root==num){
            int a=root/2;
            int b=root-a;

            cout<<a<<" "<<b<<endl;
        }
        else{
            cout<<-1<<endl;
        }

    }
}