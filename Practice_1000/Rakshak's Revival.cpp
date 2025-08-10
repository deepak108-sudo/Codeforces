#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	cin>>t;
    
	while(t--)
	{
        int c=0, ans=0;
        int n,m,k; cin>>n>>m>>k;
        string s;   cin>>s;
        
        for(int i=0;i<n;i++){
            if(s[i]=='1') c=0;
            else c++;

            if(c==m){
                ans++; 
                i+=(k-1);
                c=0;
            }
        }
        cout<<ans<<endl;
    }
}