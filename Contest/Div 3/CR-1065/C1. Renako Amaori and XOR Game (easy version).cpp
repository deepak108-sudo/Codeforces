#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;

    //input
    vector<int> a(n);
    vector<int> b(n);
    
    int x=0,y=0;
    for(int &i:a) {
        cin>>i;
        x^=i;
    }

    for(int &i:b) {
        cin>>i;
        x^=i;
    }
    
    //If both are 0 and 0 . or 1 and 1 then swaping both will swap do not effect parity parity changes for both 0,0   1,1   0,0 so tie
    if(x==y){
        cout<<"Tie"<<endl;
        return;
    }

    //Now if not tie then: The person with last bit diff. will change the whole game because till before they tell the other person to swap on but at last they will change whole game. parity change make it 1 to himself
    int lastIdx=0;  //definately will be
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]) lastIdx=i;
    }

    cout<<((lastIdx%2==0) ? "Ajisai" : "mAi")<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}

