#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> a(n);

    for(int &i:a) cin>>i;
    
    vector<int> inc;
    inc.push_back(a[0]);
    for(int i=1;i<n;i++){
        if(a[i]>inc.back()){
            inc.push_back(a[i]);
        }
        else{
            int idx=lower_bound(begin(inc),end(inc),a[i])-begin(inc);
            inc[idx]=a[i];
        }
    }

    //print
    cout<<inc.size()<<endl;
}