#include<bits/stdc++.h>
using namespace std;

int main(){
     int t; cin>>t;
     srand(time(0)); //ignore it its just fun

     while(t--){
          int n; cin>>n;

          //a xor 0=a......... a xor a =0
          int totalXor=0,b;
          for(int i=0;i<n;i++){
               cin>>b;
               totalXor^=b;
          }

          if(n%2==1){
               cout<<totalXor<<endl;
          }
          else{
               if(totalXor==0){
                    cout<<rand()%10<<endl; //print random no.
               }
               else{
                    cout<<-1<<endl;
               }
          }

          // //if n is even then x^x ^ x^x paired up eventually exhaust x hence -a as answer
          // //we are not dependent on x and a is 0 l.h.s ==r.h.s so 0
          // if(a==0 && n%2==0){
          //     cout<<0<<endl;  //We can print any number
          //     continue; 
          // }

          // //we do not have x to assign non zero to x to become result 0
          // else if(a!=0 && n%2==0){
          //      cout<<-1<<endl;
          //      continue;
          // }

          // cout<<a<<endl;
     }
}