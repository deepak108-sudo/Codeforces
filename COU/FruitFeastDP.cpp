#include<bits/stdc++.h>
using namespace std;

int T,O,L;
vector<vector<bool>> dp;

void solve(int f,int water){
    if(f>T) return;
    if(dp[f][water]==true) return;

    dp[f][water]=true;

    solve(f+O,water); //Eater orange
    solve(f+L,water); //Eaten Lemon
    if(water==0 && f>0) solve(f/2,1); //drank water and got f/2
}
int main(){
    ifstream fin("feast.in");
    ofstream fout("feast.out");

    fin>>T>>O>>L;
    dp.assign(T+1,vector<bool>(2,false));

    solve(0,0); //fullness is 0 not consumed water

    //Now check
    for(int f=T;f>=0;f--){
        if(dp[f][0]==1 || dp[f][1]==1){
            fout<<f;
            break;
        }
    }
}