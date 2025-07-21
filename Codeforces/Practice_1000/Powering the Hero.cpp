#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;

        //Taking input
        vector<int> a(n); 
        for(auto &i:a) cin>>i;

        //Priority queue
        long long ans=0;
        priority_queue<int> pq;

        for(int &num:a){
            if(num!=0) pq.push(num);
            else if(!pq.empty()){
                int ele=pq.top();
                pq.pop();

                ans+=ele;
            }
        }

        cout<<ans<<endl;
    }
}

        

