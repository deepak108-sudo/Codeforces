#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int temp=n;
        n-=1;
        vector<pair<int,int>> a;

        while(n!=0){
            a.emplace_back(temp,n);
            temp=ceil((temp+n)/2);
            n--;
        }

        //print
        cout<<temp<<endl;
        for(auto  &i:a)
        {
            cout<<i.first<<" "<<i.second<<endl;
        }
    }
}