#include<bits/stdc++.h>
using namespace std;
#define int long long

int longestCommonSubsequence(string text1, string text2) {
        if(text1.size()>text2.size()){
            swap(text1,text2);
        }


        int s1=text1.size();
        int s2=text2.size();

        vector<int> t2(26,0);
        for(int i=0;i<s2;i++){
            t2[text2[i]-'a']++;
        }

        for(int m:t2){
            cout<<m<<" ";
        }
        cout<<endl;

        vector<int> vec(26,0);
        
        for(int i=0;i<s1;i++){
            int idx=text1[i]-'a';
            if(t2[idx]>0){

                int maxi=0;
                for(int j=idx;j>=0;j--){
                    maxi=max(maxi,vec[j]);
                }
                vec[idx]=maxi+1;
            }
        }

        for(int m:vec){
            cout<<m<<" ";
        }
        cout<<endl;

        return *max_element(begin(vec),end(vec));
    }


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1,s2;
    cin>>s1>>s2;
    cout<<longestCommonSubsequence(s1,s2);
}