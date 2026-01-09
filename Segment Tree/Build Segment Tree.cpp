#include<bits/stdc++.h>
using namespace std;

vector<int> segmentTree;
vector<int> a;

void buildSegment(int i,int l,int r){
    //base case
    if(l==r){
        segmentTree[i]=a[l];
        return;
    }

    int mid=l+(r-l)/2;
    buildSegment(2*i+1,l,mid);
    buildSegment(2*i+2,mid+1,r);

    segmentTree[i]=segmentTree[2*i+1]+segmentTree[2*i+2];
}

int main(){
    int n; cin>>n;
    a.resize(n);

    for(int &i:a){
        cin>>i;
    }
    segmentTree.resize(2*n);


    buildSegment(0,0,a.size()-1); //(index,lower,upper)

    //print
    for(int &i:segmentTree) cout<<i<<" ";
    cout<<endl;
}