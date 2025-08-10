#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,m,l,r;
        cin>>n>>m>>l>>r;

        int rem=m-r > 0 ? m-r : 0; //how much remain after moving right
        int leftBound=0-rem;
        int rightBound= m<=r ? m : r;

        cout<<leftBound<<" "<<rightBound<<endl;
    }
}