#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        //already s< reversed or k>=1 and all character are not same
            int n,k; cin>>n>>k;
            string s; cin>>s;

            string rev=s;
            reverse(begin(rev),end(rev));

            if(s< rev || (k>=1) && *min_element(begin(s),end(s))!=*max_element(begin(s),end(s)))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
    }
}