#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k; cin>>n>>k;
    float x=n,y=n;
    int time=0;
    int new_x=0,new_y=0;

    while(x>0){
        time++;
        if(x==y){
            new_x=floor(x/2);
            new_y=ceil(y/2);
        }
        else{
            //set for distinct
            set<int> st;
            st.insert(floor(x/2));
            st.insert(ceil(x/2));
            st.insert(floor(y/2));
            st.insert(ceil(y/2));
            
            new_x=*st.begin();
            new_y=*st.rbegin();
        }

        if(k==new_x || k==new_y){
            cout<<time<<endl;
            return;
        }
        x=new_x;
        y=new_y;
    }
    cout<<-1<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}

