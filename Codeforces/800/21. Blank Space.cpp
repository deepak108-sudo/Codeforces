#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;

	while(t--){
		int n; cin>>n;

		int a;
		int longest=0,zero=0;
		for(int i=0;i<n;i++){
			cin>>a;

			if(a==1) zero=0;
			else zero++;

			longest=max(longest,zero);
		}
		cout<<longest<<endl;
	}
}