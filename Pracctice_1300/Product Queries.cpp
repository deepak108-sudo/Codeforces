#include<bits/stdc++.h>
using namespace std;
#define int long long

//Preprocess
const int N=3*1e5+1;
vector<bool> isPrime(N+1,true);
vector<int> lp(N+1,0),hp(N+1);

void preProcess(){
    isPrime[0]=isPrime[1]=false;

    for(int i=2;i<=N;i++){
        if(isPrime[i]==true){
           lp[i]=hp[i]=i;
            for(int j=2*i;j<N;j+=i){
                hp[j]=i;
                isPrime[j]=false;
                if(lp[j]==0){
                    lp[j]=i;
                }
            }
        }
    }
}

void solve(){
    unordered_set<int> st;
    int n; cin>>n;
    int x;

    //taken all inputs
    for(int i=0;i<n;i++){
        cin>>x;
        st.insert(x);
    }

    auto findPrime=[&](int num){
        unordered_map<int,int> mp;

        while(num>1){
            int prime_factor=hp[num];
            if(num%prime_factor==0){
                num/=prime_factor;
                mp[prime_factor]++;
            }
        }
        return mp;
    };

    //now computing prime factorization of each
    for(int i=1;i<=n;i++){
        if(st.count(i)){
            cout<<1<<" ";
            continue;
        }   
            int ans=0;
            auto prime=findPrime(i);
            for(auto &p:prime){
                if(st.find(p.first)!=st.end()){
                    ans+=(prime[p.first]);
                }
            }
            cout<<((ans==0) ? -1 : ans)<<" ";
    }
    cout<<endl;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    preProcess();

    int t; cin>>t;
    while(t--){
        solve();
    }
}