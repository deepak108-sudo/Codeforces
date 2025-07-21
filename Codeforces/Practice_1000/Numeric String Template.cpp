#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;

        //Taking array input
        vector<int> a(n); 
        for(int &i:a) cin>>i;

        //Taking string input
        int m; cin>>m;
        vector<string> s(m);

        int i=0;
        while(m--)
        {
            cin>>s[i++];
        }

        //Processing
        for(auto &str:s){
            //edge case
            if(str.size()!=a.size()) {
                cout<<"NO"<<endl;
                continue;
            }

            bool f=true;
            unordered_map<char,int> charToInt;
            unordered_map<int,char> intToChar;

            for(int i=0;i<str.size();i++){

                //Check char to int
                if(charToInt.count(str[i])){
                    if(charToInt[str[i]]!=a[i] )
                    {
                        f=false;
                        break;
                    } 
                }
                else{
                    charToInt[str[i]]=a[i];
                }

                //Check int to Char
                if(intToChar.count(a[i])){
                    if(intToChar[a[i]]!=str[i])
                    {
                        f=false;
                        break;
                    } 
                }
                else{
                    intToChar[a[i]]=str[i];
                }
            }

            //Result
            if(f) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}