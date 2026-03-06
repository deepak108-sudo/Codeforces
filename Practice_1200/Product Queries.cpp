#include<bits/stdc++.h>
using namespace std;
#define int long long
unordered_set<int> st;
int N=3e5;
vector<bool> isPrime(N,1);
vector<int> lp(N,0),hp(N,0);


unordered_map<int,int> primeFactor(int num){
    unordered_map<int,int> prime_factors;

    while(num>1){
        int prime_factor=hp[num];
        while(num%prime_factor == 0){
            num /=prime_factor;
            prime_factors[prime_factor]++;
        }
    }
    return prime_factors;
}

void solve(){
   int n; cin>>n;

   //taken input
   for(int i=0;i<n;i++){
    int x; cin>>x;
    st.insert(x);
   }

   for(int i=1;i<=n;i++){
        if(i==1){
            if(st.count(1))
                cout<<i<<" ";
            else    
                cout<<-1<<" ";

            continue;
        }

       unordered_map<int,int> mp=primeFactor(i);

       int ansT=0;
       for(auto &p:mp){
        if(st.count(p.first)){
            ansT+=p.second;
        }
       }

       //Check
       if(ansT==0){
        cout<<-1<<" ";
        continue;
       }
       cout<<ansT<<" ";
   }
   cout<<endl;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //Preprocessing of numbers
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i<N;i++){
        if(isPrime[i]==true){
            lp[i]=hp[i]=i;
            for(int j=2*i;j<N;j+=i){
                isPrime[j]=false;
                hp[j]=i;
                if(lp[j]==0){
                    lp[j]=i;
                }
            }
        }
    }

    int t; cin>>t;
    while(t--){
        solve();
    }
}