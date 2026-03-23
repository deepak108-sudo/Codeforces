#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k; cin>>n>>k;

    //Taking string 
    vector<string> str(k);
    for(int i=0;i<k;i++){
        cin>>str[i];
    }

    vector<int> bits(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            int idx=str[j][i]-'a';
            bits[i]|=(1<<idx);
        }
    }

    //Jumping and check
    string ans;
    for(int d=1;d<=n;d++){
        if(n%d!=0) continue;

        string pattern;
        for(int st=0;st<d;st++){
            int interaction=bits[st];
            for(int r=1;st+r*d<n;r++){
                interaction&=bits[st+r*d];
            }
            if(interaction==0) break;

            //if there is common then take any one character
            for(int i=0;i<26;i++){
                if((interaction>>i)&1){
                    pattern.push_back((char)(i+'a'));
                    break;
                }
            }
        }
        
        if(pattern.size()==d){
            int cnt=n/d;
            while(cnt--){
                ans.append(pattern);
            }
            break;
        }
    }
    cout<<ans<<endl;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}