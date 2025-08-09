#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        
        int remain=n%5;
        int cycle=n/5;

        string s="aeiou";

        if(n==1) cout<<"a";
        else if(n==2) cout<<"ae";
        else if(n==3) cout<<"aei";
        else if(n==4) cout<<"aeio";
        else if(n==5) cout<<"aeiou";
        else{

            for(char &ch:s){
                for(int i=0;i<cycle;i++){
                    cout<<ch;
                }
            
    
            for(int i=0;i<remain;i++){
                cout<<ch;
            }

            for(int i=n/2+1;i<n;i++){
                cout<<ch;
            }
            }

        }


        cout<<endl;
    }
}