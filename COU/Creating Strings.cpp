#include<bits/stdc++.h>
using namespace std;
using ll=long long;

string s; 
vector<string> perm;
vector<int> cc(26,0);

//Generating permutation
void gen(string temp){
    if(temp.size()==s.size()){
        perm.push_back(temp);
    }
    else{
        for(int i=0;i<26;i++){
            if(cc[i]>0){
                cc[i]--;
                gen(temp+(char)(i+'a'));
                cc[i]++;
            }
        }
    }
}

int main(){
    cin>>s;

    for(char ch:s){
        cc[ch-'a']++;
    }

    //Generate permutation
    gen("");

    //Print
    cout<<perm.size()<<endl;
    for(auto &s:perm) cout<<s<<endl; 
}