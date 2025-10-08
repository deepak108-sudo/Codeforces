#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n; cin>>n;

    vector<int> vec(n);
    map<int,int> mp;

    //taking input and counting
    int x,sum=0;
    for(int i=0;i<n;i++){
        cin>>x;
        mp[x]++;
        vec[i]=x;
    }

    // for(auto m:mp){
    //     cout<<"-----"<<m.first<<"-----"<<m.second<<endl;
    // }
    // return;


    //not possible case
    for(auto m:mp){
        if(m.second%m.first!=0){
            cout<<-1<<endl;
            return;
        }
    }
    
    //get sum
    for(auto m:mp){
        sum+=(m.second/m.first)*m.first;
    }
    
    //not possible case
    if(sum!=n){
        cout<<-1<<endl;
        return;
    }


    //If it is greater than v
    map<int,vector<int>> store;
    set<int> st;

    //store the element that is not in vec
    int last=n;
    while(last>1){
        if(!mp.count(last)){
            st.insert(last);
        }
        last--;
    }

    //Check if frequency greater than key then place other no.
    for(auto &m:mp){
        int key=m.first;
        
        //if mp[2]=6 then 1001,1001,1000,1000
        if(m.second>key){

            int times=key;
            while(times--){
                    for(int i=0;i<key;i++){
                        store[key].push_back(key);
                    }
            }

            
            for(int j=0;j<m.second-key;j+=key){

                //taken which are in not in vec then erase it
                int last = *st.begin();
                st.erase(last);

                for(int k=0;k<key;k++){
                    store[key].push_back(last);
                }
            }
        }
        else{
            for(int i=0;i<key;i++){
                store[key].push_back(key);
            }
        }
    }

    //Populate to answer
    vector<int> ans;
    for(int &v:vec){
        ans.push_back(store[v].back());
        store[v].pop_back();
    }

    for(int v:ans){
        cout<<v<<" ";
    }
    cout<<endl;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}