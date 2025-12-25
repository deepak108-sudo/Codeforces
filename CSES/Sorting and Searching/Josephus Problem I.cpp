#include<bits/stdc++.h>
using namespace std;
#define int long long
void josephus(vector<int> a){
    if(a.size()==1){
        cout<<a[0];
        return;
    }

    int n=a.size();
    for(int i=1;i<n;i+=2){
        cout<<a[i]<<" ";
    }

    //if array was odd
    vector<int> newArr;
    if(n%2==0){
        for(int i=0;i<n;i+=2)
            newArr.push_back(a[i]);
    }
    else{
        newArr.push_back(a.back());
        for(int i=0;i<n-1;i+=2){
            newArr.push_back(a[i]);
        }
    }


    josephus(newArr);
}

signed main(){
    int n; cin>>n;
    vector<int> a(n);

    for(int i=1;i<=n;i++){
        a[i-1]=i;
    }

    josephus(a);
}