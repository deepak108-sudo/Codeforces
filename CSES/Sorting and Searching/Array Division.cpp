#include<bits/stdc++.h>
using namespace std;
#define int long long

bool canDivide(vector<int> &a,int k,int limit){
    int group=0,sum=0;

    for(int i=0;i<a.size();i++){
        if(a[i]>limit){
            return false;
        }
        else if(sum+a[i]>limit){
            group++;
            sum=0;
        }

        sum+=a[i];
    }
    if(sum>0) group++;

    return group<=k;
}

signed main(){
    int n,k; cin>>n>>k;

    vector<int> a(n);
    for(int &i:a){
        cin>>i;
    }

    //binary search on answer
    int l=*max_element(begin(a),end(a));
    int r=accumulate(begin(a),end(a),0LL);

    int ans=r;
    while(l<=r){
        int mid=l+(r-l)/2;

        if(canDivide(a,k,mid)){   //can we divide such that minimum sum is mid(or not exceed mid) in k group.
            r=mid-1;
            ans=mid;
        }
        else{
            l=mid+1;
        }
    }

    cout<<ans<<endl;
}