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
		int count=0;
		int size,k;
		cin>>size>>k;

		string s;
		cin>>s;
		string original_s=s;

		reverse(s.begin(),s.end());

		if(original_s==s && k==0)
		{
			cout<<"NO";
		}
		else if(original_s<s)
		{
			cout<<"YES";
		}
		else if(original_s>s && k>0)
		{
			cout<<"YES";
		}
		else if(original_s>s && k==0)
		 {
		 	cout<<"NO";
		 }
		else if(original_s==s && k>0)
		{
			char ch=original_s[0]; //z
			for(int i=0;i<size;i++)
			{
				if(s[i]==ch)		//z==z,z==z,z==z
				{
					count++;		//3
				}
			}
			if(count==size)
			{
				cout<<"NO";
			}
			else
			{
				cout<<"YES";
			}
		}
		
		cout<<endl;
	}
	return 0;
}