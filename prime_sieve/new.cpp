#include <bits/stdc++.h>
using namespace std;
#define ll long

const int N=3005;

int seive(int n){
	int pr[N] = {0};

	for(int i=0;i<n;i++)
	{
		pr[i]=1;
	}

	pr[0]=0;
	pr[1]=0;
	vector<int> primes;
	int i,j;
	for(int i=2;i<=n;i++){
		if(pr[i]){
			primes.push_back(i);
			for(j=i;i*j<=n;j++){
				pr[i*j]=0;
			}
		}
	}

	for(auto i:primes)
	{
		cout<<i<<endl;
	}
	// int ans=0;
	// for(int i=2;i<=n;i++){
	// 	if(pr[i]==2) ans++;
	// }
	// return ans;
}





int main()
{
		#ifndef ONLINE_JUDGE
	freopen("inputs.txt","r",stdin);
 	freopen("outputs.txt","w",stdout);
 	#endif

int t;
cin>>t;
seive(t);

	return 0;
}




















