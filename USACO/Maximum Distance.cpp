#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> x(n),y(n);

    for(int i=0;i<n;i++){
        cin>>x[i];
    }

    for(int i=0;i<n;i++){
        cin>>y[i];
    }

    //Finding each distance
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int dist_sq=(x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]);

            maxi=max(maxi,dist_sq);
        }
    }

    cout<<maxi<<endl;
}