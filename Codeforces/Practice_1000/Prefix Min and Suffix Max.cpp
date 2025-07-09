#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int n; cin>>n;

        //Taken input
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        vector<int> prefix(n);
        vector<int> suffix(n);

        //Prefix of Left Minimum
        prefix[0]=a[0];
        for(int i=1;i<n;i++){
            prefix[i]=min(prefix[i-1],a[i]);
        }

        //Suffix of Maximum
        suffix[n-1]=a[n-1];
        for(int i=n-2;i>=0;i--){
            suffix[i]=max(suffix[i+1],a[i]);
        }

        //Put into result if they match
        string result="";
        for(int i=0;i<n;i++){
            if(prefix[i]==a[i] || suffix[i]==a[i]) result.push_back('1');
            else
                result.push_back('0');
        }

        cout<<result<<endl;
    }
}