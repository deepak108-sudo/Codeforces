#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int t; cin>>t;
    while(t--){
        int m; cin>>m;
        int temp=m;

        priority_queue<int> pq;
        int lowest=INT_MAX;

        while(m--){
            int n; cin>>n;
            
            vector<int> a(n);
            for(int i=0;i<n;i++){
                cin>>a[i];
            }

            sort(begin(a),end(a));

            lowest=min(lowest,a[0]);

            //pq.push(a[0]);
            pq.push(a[1]);
        }
        ll ans=0;
        temp--;
        while(temp--){
            ans+=(pq.top());
            pq.pop();
        }

        cout<<ans+lowest<<endl;
    }
}
