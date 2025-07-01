#include<iostream>
using namespace std;

int main()
{
	int last=0;
	int t;

	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int n=s.size();
		last= n-1;
		int ans=0;


		for(int i=n-1;i>=0;i--)	//To find the first last non-zero from last(because we have to eliminate 0 if possible to reduce the numerator)
		{
			if(s[i]=='0')
			{
				ans++;
			}else{
				last=i;
				break;
			}
		}

		for(int i=0;i<last;i++)	//Now after find last non-zero we have to remove all the non-zero no. from beginning
		{
			if(s[i]!='0') ans++;
		}

		cout<<ans<<endl;
	}
	return 0;
}