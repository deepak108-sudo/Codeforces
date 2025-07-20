#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        long long n; cin>>n;

        if(n<4 || n%2!=0) cout<<-1<<endl;   //n is odd bcoz 4a+6b=n ----Means n should be even

        else{
            long long min_buses=ceil(n/6.0);
            long long max_buses=n/4;

            cout<<min_buses<<" "<<max_buses<<endl;
        }
    }
}