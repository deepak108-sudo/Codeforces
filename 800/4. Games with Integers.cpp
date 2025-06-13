#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		long long n; 
		cin>>n;

		if(n%3==0) 
			cout<<"Second"<<endl;	//Vova Wins

		else cout<<"First"<<endl;		//Vanya Wins
	}
	return 0;
}