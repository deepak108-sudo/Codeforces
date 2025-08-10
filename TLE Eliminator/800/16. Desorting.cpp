#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;

	while(t--){
		int n; cin>>n;

		vector<int> a(n);
		int mini=INT_MAX;

		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		bool f=false;
		for(int i=0;i<n-1;i++){
			int diff=a[i+1]-a[i];

			if(diff<0){
				f=true;
				cout<<0<<endl;
				break;
			}

			mini=min(mini,diff);
		}

		if(!f)
			cout<<(int)floor(mini/2)+1<<endl;
	}
}