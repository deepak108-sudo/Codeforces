#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;

        string s; cin>>s;

        //Start with (0,0)
        int x=0,y=0;

        bool f=false;

        for(int i=0;i<1000;i++){
            int i_=i%n;

            //Managing the direction
            if(s[i_]=='N') y+=1;
            else if(s[i_]=='E') x+=1;
            else if(s[i_]=='S') y-=1;
            else x-=1;

            if(x==a && y==b){   //Location found
                f=true;
                break;
            }
        }

        //Print output
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}