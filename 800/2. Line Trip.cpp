#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;

		int prev=0,ans=0;
		for(int i=0;i<n;i++){
			int a; cin>>a;
			ans=max(a-prev,ans);
			prev=a;
		}

		ans=max(ans,2*(x-prev));
		cout<<ans<<endl;
	}
	return 0;
}