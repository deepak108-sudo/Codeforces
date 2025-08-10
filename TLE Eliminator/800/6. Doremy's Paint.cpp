#include<bits/stdc++.h>
using namespace std;
int main(){

		int t;
		cin>>t;

		while(t--){
			int n;
			cin>>n;
			map<int,int> mp;

			vector<int> a(n);
			for(int i=0;i<n;i++){
				cin>>a[i];
				mp[a[i]]++;
			}

			int s=mp.size();
			if(s>2){
				cout<<"NO"<<endl;
				continue;
			} 

			if(s==1){
				cout<<"YES"<<endl;
				continue;
			} 

			auto it=mp.begin();
			int f1=(it++)->second;;
			int f2=it->second;
			
			if(abs(f1-f2)<=1) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;

			
		}
		return 0;
}