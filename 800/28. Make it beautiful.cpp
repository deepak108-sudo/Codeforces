#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;

        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        
        int max_elem=*max_element(begin(a),end(a));
        int min_elem=*min_element(begin(a),end(a));

        if(min_elem==max_elem){

            cout<<"NO"<<endl;
            for(int &n:a){
                cout<<n<<" "<<endl;
            }

            continue;
        }

        sort(a.begin(),a.end(),greater<int>());

        cout<<"YES"<<endl;
        for(int &n:a){
                cout<<n<<" "<<endl;
            }

    }
}