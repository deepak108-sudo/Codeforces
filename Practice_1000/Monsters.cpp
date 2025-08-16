#include<bits/stdc++.h>
using namespace std;

#define pp pair<int,int>

struct cmp{
    bool operator()(const pp& a,const pp& b) const{
        if(a.first != b.first) return a.first<b.first;
        return a.second>b.second;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> a(n);

        for(int i=0;i<n;i++) {
            cin>>a[i];
            a[i]%=k;
        }

        priority_queue<pp,vector<pp>,cmp> pq;

        for(int i=0;i<n;i++){

            if(a[i]==0) //becomes zero after modulo k
            {
                cout<<i+1<<" ";
                continue;
            }
            pq.push({a[i],i});
        }

        //Process
        while(!pq.empty()){
            auto pair=pq.top();
            pq.pop();
            int val=pair.first;
            int idx=pair.second;

            val-=k;
            if(val<=0){
                cout<<idx+1<<" ";
            }
            else{
                pq.push({val,idx});
            }
        }
        cout<<endl;
    }
}