#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;

        vector<set<int>> st(n);

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int x;  cin>>x;
                st[i].insert(x);
            }
        }

        //Set of upper pip
        vector<int> res;

        bool f=true;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(!st[i].empty() && st[i].count(cnt)){

                res.push_back(i+1);
                cnt++;
                i = -1;
                continue;
            }
        }

        vector<int> temp(n);
            for( int i=0;i<n;i++)
                temp[i]=res[i];

            for(int i=n;i<res.size();i++){
                if(res[i]!=temp[i%n]){
                    f=false;
                    break;
                }
            }

            if(f==true){
                for(int &i:temp)
                    cout<<i<<" ";
            }
            else{
                cout<<-1;
            }
            cout<<endl;
        }
    
}
