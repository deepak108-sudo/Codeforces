#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
   int n; cin>>n;
   string s; cin>>s;

   if(n==1){
    cout<<0<<endl;
    return;
   }

   vector<int> leftCountB(n,0);
   vector<int> rightCountB(n,0);

   //LeftCount----B
   if(s[n-1]=='b') rightCountB[n-1]=1;

   for(int i=n-2;i>=0;i--){
        if(s[i]=='b') rightCountB[i]=rightCountB[i+1]+1;
        else rightCountB[i]=rightCountB[i+1];
   }

   //RightCount----B
   if(s[0]=='b') leftCountB[0]=1;
   for(int i=1;i<n;i++){
    if(s[i]=='b') leftCountB[i]=leftCountB[i-1]+1;
    else leftCountB[i]=leftCountB[i-1];
   }

   //Left
//    cout<<"Left:";
//    for(int i:leftCountB) cout<<i<<" ";
//    cout<<endl;

//    cout<<"Rig:";
//    for(int i:rightCountB) cout<<i<<" ";
//     cout<<endl;



int mini=LLONG_MAX;
for(int pivot=0;pivot<n;pivot++){
    //left move
    int left=0,right=0;
    for(int j=pivot;j>=0;j--)
    {
        if(s[j] == 'a' && (leftCountB[pivot]-leftCountB[j])>=0)
        {
            left+=(leftCountB[pivot]-leftCountB[j]);
        }
    }
                

    //right move
    for(int j=pivot;j<n;j++){
            if(s[j] == 'a' && (rightCountB[pivot]-rightCountB[j])>=0)
            {
                right+=(rightCountB[pivot]-rightCountB[j]);
            }
        }

                int ans=0;
                if(s[pivot]=='b'){
                    ans=left+right-1;
                }

                else{
                    ans=left+right;
                }
                // cout<<ans<<endl;
                mini=min(mini,ans);
        }

//----------------------------------------------------------------------------
vector<int> leftCountA(n,0);
vector<int> rightCountA(n,0);

if(s[n-1]=='a') rightCountA[n-1]=1;

   for(int i=n-2;i>=0;i--){
        if(s[i]=='a') rightCountA[i]=rightCountA[i+1]+1;
        else rightCountA[i]=rightCountA[i+1];
   }

   //RightCount----B
   if(s[0]=='a') leftCountA[0]=1;
   for(int i=1;i<n;i++){
    if(s[i]=='a') leftCountA[i]=leftCountA[i-1]+1;
    else leftCountA[i]=leftCountA[i-1];
   }

   //Left
//    cout<<"Left:";
//    for(int i:leftCountB) cout<<i<<" ";
//    cout<<endl;

//    cout<<"Rig:";
//    for(int i:rightCountB) cout<<i<<" ";
//     cout<<endl;


//Calculation
for(int pivot=0;pivot<n;pivot++){
    //left move
    int left=0,right=0;
    for(int j=pivot;j>=0;j--)
    {
        if(s[j] == 'b' && (leftCountA[pivot]-leftCountA[j])>=0)
        {
            left+=(leftCountA[pivot]-leftCountA[j]);
        }
    }
                

    //right move
    for(int j=pivot;j<n;j++){
            if(s[j] == 'b' && (rightCountA[pivot]-rightCountA[j])>=0)
            {
                right+=(rightCountA[pivot]-rightCountA[j]);
            }
        }

                int ans=0;
                if(s[pivot]=='a'){
                    ans=left+right-1;
                }
                else{
                    ans=left+right;
                }
                // cout<<ans<<endl;
                mini=min(mini,ans);
        }

        if(mini<0) cout<<0<<endl;
        else cout<<mini<<endl;

   }


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}