#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> arr(n);

    //Taking input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //assigning first and last element
    int a=arr[0],b=arr[n-1];

    //Checking condition
    int res=0;
    if((a==-1 && b!=-1)) 
        arr[0]=b;

    else if((a!=-1 && b==-1)) 
        arr[n-1]=a;

    //Printing
    cout<<abs(arr[n-1]-arr[0])<<endl;
    for(int i=0;i<n;i++){
        cout<<((arr[i]==-1) ? res : arr[i])<<" "; 
    }
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}

