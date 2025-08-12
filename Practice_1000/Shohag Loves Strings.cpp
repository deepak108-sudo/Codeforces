#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string a; cin>>a;
        int n=a.size();

        //3distinct
        bool f=false;
        int i=0,j=0;
        while(j<=n-3){
            if(a[j]!=a[j+1] && a[j+1]!=a[j+2] && a[j]!=a[j+2]){
                f=true;
                cout<<a[j]<<a[j+1]<<a[j+2]<<endl;
                break;
            }
            j++;
        }

        if(f==false){
            j=0;
            while(j<=n-2){
                if(a[j]==a[j+1]){
                    f=true;
                    cout<<a[j]<<a[j+1]<<endl;
                    break;
                }
                j++;
            }
        }

        if(f==false)
        cout<<-1<<endl;
    }
}