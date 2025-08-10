#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;
		
		int total_empty=0;
		int consecutive_dots=0;
		bool flag=false;

		for(int i=0;i<n;i++){
			char a; cin>>a;

			if(a=='.'){
					++total_empty;
					++consecutive_dots;
				}

			if(consecutive_dots==3){		//3 consecutive means ans is 2
				flag=true;
				 cout<<2<<endl;
				 break;
			}

			if(a=='#'){		//as we encounter # consecutivity loss
				consecutive_dots=0;
			}
		}
		if(!flag) cout<<total_empty<<endl;	//if visited cnt block skip
	}
	return 0;
}