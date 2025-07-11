#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s;   cin>>s;

        int l=1,r=n;    //l-> lower no.
                        //r-> higher no.

        vector<int> ans(n);

        for(int i=n-2;i>=0;i--){    //i point to the char < or >
            if(s[i]=='<'){
                ans[i+1]=l;
                l++;
            }
            else{
                ans[i+1]=r;
                r--;
            }
        }

        ans[0]=r;

        for(int &n:ans)
            cout<<n<<" ";
        
        cout<<endl;
    }
}
