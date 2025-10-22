#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> a(n);

    //d[i] = LIS till i index
    vector<int> d(n,1);

    for(int &i:a) cin>>i;

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[j]<a[i] && d[i]<=d[j]){
                d[i]=d[j]+1;
            }
        }
    }

    //print
    cout<<*max_element(begin(d),end(d))<<endl;
}