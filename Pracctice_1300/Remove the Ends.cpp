    #include<bits/stdc++.h>
    using namespace std;
    #define int long long
    int total=1e9+1;

    void solve(){
        int n; cin>>n;

        //taken input
        vector<int> a(n);
        for(int &i:a) cin>>i;
        vector<int> pos(n+1,0);
        vector<int> neg(n+1,0);

        //Positive array formation
        for(int i=1;i<=n;i++){
            if(a[i-1]>0)
                pos[i]=a[i-1]+pos[i-1];
            else{
                pos[i]=pos[i-1];
            }
        }

        //Negative array formation
        for(int i=n-1;i>=0;i--){
            if(a[i]<0)
                neg[i]=(a[i]*-1)+neg[i+1];
            else
                neg[i]=neg[i+1];
        }

        // for(auto &num:neg){
        //     cout<<num<<" ";
        // }

        //now take maxi
        int ans=0;
        for(int i=0;i<=n;i++){
            ans=max(ans,pos[i]+neg[i]);
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