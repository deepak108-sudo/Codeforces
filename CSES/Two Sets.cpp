#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
     //Taken input
     int n; cin>>n;
     set<int> s1;
     set<int> s2;

     int total=n*(n+1)/2;
     int target=total/2;

     if(total%2!=0){
        cout<<"NO";
        return 0;
     }

     while(target>n){
        s1.insert(n);
        target-=n;
        n--;
     }
     s1.insert(target);

     int leave=target;
     int i=1;
     while(i<=n){
        if(i!=leave)
            s2.insert(i);
        i++;
     } 

     //Print
     cout<<"YES"<<endl;
     cout<<s1.size()<<endl;

     for(int x:s1) cout<<x<<" ";
     cout<<endl;

     cout<<s2.size()<<endl;
     for(int x:s2) cout<<x<<" ";
     cout<<endl;

}