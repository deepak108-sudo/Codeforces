#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		vector<int> a(n),b,c;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		int maxi=*max_element(a.begin(),a.end());

		for(int i=0;i<n;i++){
			if(a[i]%maxi == 0)
			{
				c.push_back(a[i]);			//we will push all maximum element to c so that when divisible it can't divide b fully
			}
			else{
				b.push_back(a[i]);
			}
		}


		if(b.empty() || c.empty())
			cout<<"-1"<<endl;

		else{
				cout<<b.size()<<" "<<c.size()<<endl;

				for(auto it:b)
					cout<<it<<" ";

				cout<<endl;

				for(auto it:c) 
					cout<<it<<" ";
				cout<<endl;
			}
		
		}
	}
