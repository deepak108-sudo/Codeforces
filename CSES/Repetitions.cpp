#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
     //Taken input
     string a; cin>>a;

     //Calculated frequency
     int n=a.size();
     vector<int> f(n);
     f[0]=1;

     for(int i=1;i<n;i++){
        if(a[i]==a[i-1]){
            f[i]=f[i-1]+1;
        }
        else{
            f[i]=1;
        }
     }

     //Check which is maximum
     int maxi=*max_element(begin(f),end(f));
     cout<<maxi<<endl;

}