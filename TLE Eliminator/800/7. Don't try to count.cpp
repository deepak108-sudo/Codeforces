#include<bits/stdc++.h>
using namespace std;

bool check(string s,string m)
{
	if(m.size()<s.size())	//substring is greater than string itself so false
			return false;

	for(int i=0;i<=(int)m.size()-(int)s.size();i++){
		if(m.substr(i,s.size())==s)
			return true;
	}
	return false;
}

int main(){
	int t;
	cin>>t;

	while(t--){
		int n,m;
		cin>>n>>m;

		string x,s;
		cin>>x>>s;

		string x0=x;
		string x1=x0+x0;
		string x2=x1+x1;
		string x3=x2+x2;
		string x4=x3+x3;
		string x5=x4+x4;

		int ans=-1;
		if(check(s,x0))	ans=0;
		else if(check(s,x1))	ans=1;
		else if(check(s,x2))	ans=2;
		else if(check(s,x3))	ans=3;
		else if(check(s,x4))	ans=4;
		else if(check(s,x5))	ans=5;

		cout<<ans<<endl;
	}
}