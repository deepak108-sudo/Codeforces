#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		string s;

		cin>>n;
		cin>>s;

		int dash=0;
		int underscore=0;
		for(int i:s)
		{
			if(i=='-')
			{
				dash++;
			}
			else{
				underscore++;
			}
		}


		long long result=floor((double)dash/2)*underscore*ceil((double)dash/2); //--__---
		cout<<result<<endl;
	}
	return 0;
}