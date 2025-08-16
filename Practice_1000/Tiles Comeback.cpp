#include<bits/stdc++.h>
using namespace std;

#define all(v) v.begin(),v.end()
string solve();

int main(){
    int t; cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}

string solve(){
    int n,k; cin>>n>>k;
    int tempk=k;

    vector<int> a(n);

    for(int &i:a) cin>>i;

    if(a[0]==a[n-1]){
        int cnt=count(all(a),a[0]);

        if(cnt<k) return "NO";
        return "YES"; 
    }

    //Both unequal
    else{
        int left=a[0], right=a[n-1];
        int i=0;
        while(i<n){
            if(a[i]==left){
                tempk--;

                if(tempk==0) break;
            }
            i++;
        }

        tempk=k;
        int j=n-1;
        while(j>=0){
            if(a[j]==right){
                tempk--;
                if(tempk==0) break;
            }
            j--;
        }

        if(i<j) return "YES";
        return "NO";
    }
}