#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,m; cin>>n>>m;

    //Ticket price ---> sort automatically in descending order
    multiset<int,greater<int>> st;
    int x;
    while(n--){
        cin>>x;
        st.insert(x);
    }


    //Apply bs and find no. <= target
   while(m--){
     cin>>x;
     auto it=st.lower_bound(x); //found <=x because array in descending order

     if(it==st.end()) cout<<-1<<endl;
     else {
        cout<<*it<<endl;
        st.erase(it);
     }
   }
}