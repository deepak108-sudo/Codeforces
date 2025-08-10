#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int a,b,x,y;
        cin>>a>>b>>x>>y;

        //When a==b
        if(a==b){
            cout<<0<<endl;
            continue;
        }

        //When a is greater
        else if(a>b){
            if(b!=a-1){
                cout<<-1<<endl;
                continue;
            }

            if(a%2!=0 && b==a-1){         //odd then we can decrease by one only
                cout<<y<<endl;
                continue; 
            }
            else{
                cout<<-1<<endl;
                continue;
            }
        }

        //When a is less than b
        else if(a<b){
            int total=b-a;

            int odd=total/2;
            int even=odd;

            if(total%2!=0){
                if(a%2!=0){
                    odd=(total+1)/2;
                    even=total-odd;
                }
                else if(a%2==0){
                    even=(total+1)/2;
                    odd=total-even;
                }
            }

            cout<<(even*min(x,y))+(odd*x)<<endl;
        }
    }
}