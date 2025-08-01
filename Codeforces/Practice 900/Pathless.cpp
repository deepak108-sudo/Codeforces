#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,s; cin>>n>>s;

        vector<int> a(n);
        int sum=0;

        for(auto &i:a) {
            cin>>i;
            sum+=i;
        }

        if(sum>s)
        {
            for(int &num:a) cout<<num<<" ";
            cout<<endl;
            continue;
        }
        cout<<-1;
        
    }
}