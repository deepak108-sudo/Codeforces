#include<bits/stdc++.h>
using namespace std;

void buildSegTree(int idx, int l, int r, vector<int> &arr, vector<int> &segTree){
    if(l==r){
        segTree[idx] = arr[l];
        return;
    }
    int mid = l + (r-l)/2;
    buildSegTree(2*idx+1, l, mid, arr, segTree);
    buildSegTree(2*idx+2, mid+1, r, arr, segTree);

    segTree[idx] = min(segTree[2*idx+1], segTree[2*idx+2]);
}

int rangeQuery(int idx, int start, int end, int l, int r, vector<int> &segTree){
    // cout << l << " " << r << " | ";
    if(r<start || end<l) return  INT_MAX;//out of range

    if(start<=l && r<=end) return segTree[idx];

    int mid = l + (r-l)/2;

    return min( rangeQuery(2*idx+1, start, end, l, mid, segTree), 
        rangeQuery(2*idx+2, start, end, mid+1, r, segTree));

}
void solve(){
    int n, q;
    cin >> n >> q;

    vector<int> arr(n);
    for(auto &x : arr) cin >> x;

    vector<int> segTree(4*n, INT_MAX);
    buildSegTree(0, 0, n-1, arr, segTree);

    int start, end;
    for(int i=0; i<q; i++){
        cin >> start >> end;

        int ans = rangeQuery(0, start-1, end-1, 0, n-1, segTree);
        cout << ans << endl;
    }
    // cout << "OK" << endl;
    
}
int main(){
    solve();
    return 0;
}