
//Replace bits in N by M
//author : sethupathi

#include<bits/stdc++.h>
using namespace std;

int main()

{

	#ifndef ONLINE_JUDGE
	freopen("inputs.txt","r",stdin);
 	freopen("outputs.txt","w",stdout);
 	#endif

int n,m,i,j;
cin>>n>>m>>i>>j;

int a= (~0)<<(j+1);
int b=(1<<i)-1;
int mask = a|b;
n = n&mask;
m=m<<i;
int ans = n|m;
cout<<ans;
	
	return 0;
	
}