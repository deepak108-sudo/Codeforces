#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);

        for(int i=0;i<n;i++) cin>>a[i];
        
        //diff
        vector<int> diff(n,0);
        int i=0;
        while(i<n-1){
            if(a[i]>a[i+1]){
                int temp=a[i];
                while(i<n-1 && temp>a[i+1]){
                    diff[i+1]=abs(a[i+1]-temp);
                    i++;
                }
                continue;
            }
            i++;
        }
        
        //Taken prioity queue to get min 
        priority_queue<int,vector<int>,greater<int>> pq;

        for(int i:diff){
            if(i!=0)
                pq.push(i);
        }

        
        //Calculating
        long long total=0;
        long long cache=0;
        while(!pq.empty()){
            int size=pq.size();
            
            int top=pq.top();
            pq.pop();

            long long temp=(size+1)*(top-cache);

                total+=temp;
                cache+=(top-cache);
        }

        cout<<total<<endl;
    }
}

