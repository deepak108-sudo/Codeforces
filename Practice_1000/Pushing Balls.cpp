#include<bits/stdc++.h>
using namespace std;

bool checkRow(vector<vector<char>> &a,int i,int j){
    if(j==0) return true;

    j-=1;
        while(j>=0){
            if(a[i][j]=='0'){
                return false;
            }
            j--;
        }
        
        return true;
}

//Row Check
bool checkCol(vector<vector<char>> &a,int i,int j){
    if(i==0) return true;

    i-=1;
        while(i>=0){
            if(a[i][j]=='0'){
                return false;
            }
            i--;
        }
        
        return true;
}


int main(){
    int t; cin>>t;
    int temp=t;
    while(t--){
        int n,m; cin>>n>>m;

        vector<vector<char>> a(n,vector<char>(m,'0'));

        //Taking input
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }

        //Processing
        bool f=true;
        for(int i=0; i<n;i++){
            for(int j=m-1;j>=0;j--){
                if(a[i][j]=='1'){
                    if(checkRow(a,i,j) || checkCol(a,i,j)){
                        continue;
                    } 
                    else{
                        f=false;
                        break;
                    }

                }
                if(f==false){
                    break;
                }
            }
        }

        if(f==true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}