#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int a,b,x,y;
        cin>>a>>b>>x>>y;

        if(a>b && a%2==0){
            cout<<-1<<endl;
        }
        else if(a>b && a-b==1) {
            cout<<y<<endl;
        }
        else if(a>b && a-b>1){
            cout<<-1<<endl;
        }
        
        else if(a==b) cout<<0<<endl;
        else if(x<y) cout<<x*(b-a)<<endl;
        else {
            int odd=0,even=0;

            if((a%2!=0 && b%2!=0) || (a%2==0 && b%2==0)){
                even=(b-a)/2;
                odd=even;
            }
            else{
                odd=(b-a)/2+1;
                even=odd-1;
            }
            int p=x*odd+y*even;
            int q=x*odd+x*even;
            cout<<min(p,q)<<endl;
        }
    }
}
