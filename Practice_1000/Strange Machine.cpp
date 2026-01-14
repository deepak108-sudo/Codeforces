#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){

        //Time comp: O(n+q+n+q*log2(1e9))
        int n,q; cin>>n>>q;

        string s; cin>>s;
        vector<int> qr(q);

        //taking queries
        for(int &i:qr) cin>>i;

        bool hasB=false;
        for(char &ch:s){
            if(ch=='B') {
                hasB=true;
                break;
            }
        }

        //in a string if there is atleast one B then the no. will be 0 by log2(1e9) that is 30 iterations.

        for(int &x:qr){
            if(!hasB){
                cout<<x<<endl;
                continue;
            }
            else{
                    int step=0;
                    while(x>0){
                        for(char &ch:s){
                            if(x==0) break;
                            step++;
                            if(ch=='B'){
                                x/=2;
                            }
                            else{
                                x--;
                            }
                        }
                    }

                    cout<<step<<endl;
            }
        }
    }
}

        