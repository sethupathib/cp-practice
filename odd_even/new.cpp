
//bitwise xor practice
//finds even or odd.
//author : sethupathi

#include<bits/stdc++.h>
using namespace std;

int main()

{

	#ifndef ONLINE_JUDGE
	freopen("inputs.txt","r",stdin);
 	freopen("outputs.txt","w",stdout);
 	#endif


	// long long  x; cin>>x;
	// cout<<(x+10)%3<<endl;

 	int n; cin>>n;

 	// int ans=0;
	int no;
 	for(int i=0;i<n;i++)
 	{

 		cin>> no;
 		if (no&1) cout<<"odd"<<endl;
 		else
 		cout<<"even"<<endl;
 	}
 	// cout<<ans;
	return 0;
	
}
