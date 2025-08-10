#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;

	while(t--){

		int n;
		cin>>n;

		int a;
		int o=0,e=0;
		for(int i=0;i<n;i++){
			cin>>a;

			if(a%2==0) e++;
			else o++;
		}
		if(o%2!=0) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
}