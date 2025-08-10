#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s;
        cin>>s;

        vector<int> vec(26,0);
        for(int i=1;i<n;i++){
            int f=s[i]-'a';
            vec[f]++;
        }

        int min_freq=vec[s[0]-'a'];
        int max_freq=vec[s[0]-'a'];
        int min_index=0,max_index=0;

        

        for(int i=1;i<n;i++){
            int current_freq=vec[s[i]-'a'];

            if(current_freq>max_freq || (current_freq==max_freq && i>max_index)){
                max_index=i;
                max_freq=current_freq;
            }

            if(current_freq<min_freq){
                min_index=i;
                min_freq=current_freq;
            }
        }

        s[min_index]=s[max_index];
        cout<<s<<endl;
    }
}