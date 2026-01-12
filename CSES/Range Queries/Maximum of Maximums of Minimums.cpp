#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k; cin>>n>>k;
    vector<int> a(n);

    for(int &i:a) cin>>i;

    if(k==1){
        cout<<*min_element(begin(a),end(a))<<endl;
    }
    else if(k==2){
        int maxi=INT_MIN;
        vector<int> prefix(n);
        prefix[0]=a[0];
        for(int i=1;i<n;i++){
            prefix[i]=min(prefix[i-1],a[i]);
        }

        vector<int> suffix(n);
        suffix[n-1]=a[n-1];
        for(int i=n-2;i>=0;i--){
            suffix[i]=min(suffix[i+1],a[i]);
        }

        for(int i=0;i<n;i++){
            maxi=max(maxi,max(prefix[i],suffix[i]));
        }

        cout<<maxi<<endl;
    }
    else{
        cout<<*max_element(begin(a),end(a))<<endl;
    }
}
int main(){
    solve();
    return 0;
}