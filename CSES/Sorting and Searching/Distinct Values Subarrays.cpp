#include<bits/stdc++.h>
using namespace std;
using ll=long long;

//Counting distinct subarrays requires maintaining a window where all elements are unique; checking only the next occurrence of a single element is insufficient because duplicates of other elements can invalidate the subarray earlier. Thats why this solution is wrong

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    vector<int> a(n);
    for(int &i:a) cin>>i;
    
    //Element and vector of duplicate present
    unordered_map<int,vector<int>> mp;
    for(int i=0;i<n;i++){
        mp[a[i]].push_back(i);
    }

    
    //Traversing
    int ans=0;
    for(int i=0;i<n;i++){
        auto it=mp.find(a[i]);
        auto &temp=it->second;

        // cout<<a[i]<<"->";
        // for(auto e:temp){
        //     cout<<e<<" ";
        // }
        // cout<<endl;
        
        //Finding next index which is duplicate of a[i]
        auto nextIdx=upper_bound(begin(temp),end(temp),a[i])-begin(temp);

        // cout<<a[i]<<" nextIndex"<<nextIdx<<endl;
        
        int totalEle=1;
        if(nextIdx==(int)temp.size()){
            totalEle=n-i;   //if no duplicate at right hand side
        }else{

            //total element in right side
            totalEle=temp[nextIdx]-i+1;
        }


        //Calculating subarray
        ans+=(totalEle);
    }
    cout<<ans;
}