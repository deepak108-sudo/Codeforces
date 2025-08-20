#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;
set<string> st;

string cal(vector<int> temp){
    sort(begin(temp),end(temp));
    string s="";
    for(int i:temp){
        s+=to_string(i);
        s+="_";
    }
    return s;
}

int solve(vector<int> &a,int t,vector<int> &temp,int i){
    if(t<0){
        return 0;
    }
    if(t==0){
        string s1=cal(temp);
        if(st.count(s1)) return 0;
        st.insert(s1);
        return 1;
    }

    int ans=0;
    for(int idx=0;idx<a.size();++idx){
        temp.push_back(a[idx]);
        ans+=solve(a,(t-a[idx]),temp,i+1);
        temp.pop_back();
    }
    return ans;
}

int main(){
    int n,x; cin>>n>>x;

    vector<int> a(n);
    for(int &i:a) cin>>i;

    vector<int> temp;

    cout<<solve(a,x,temp,0);
}
