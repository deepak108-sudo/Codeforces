#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> x(n),y(n);

    //Taking input
    for(int &i:x) { cin>>i; }
    for(int &j:y) { cin>>j; }

    //Calculating
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int dx=x[i]-x[j];
            int dy=y[i]-y[j];

            int square=dx*dx+dy*dy;

            maxi=max(maxi,square);
        }
    }

    cout<<maxi<<endl;
}