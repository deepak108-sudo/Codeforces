#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> a(n);

    for(int &i:a) cin>>i;
    
    vector<int> inc;
    
    for(int i:a){
        int pos=lower_bound(begin(inc),end(inc),i)-begin(inc);

        if(pos==inc.size())
            inc.push_back(i);
        else
            inc[pos]=i;
    }

    //print
    cout<<inc.size()<<endl;
}