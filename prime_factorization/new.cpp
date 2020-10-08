//prime factorization
#include <bits/stdc++.h>
using namespace std;
#define ll long

// const int N=3005;

void solve(int n)
{
	vector<pair<int,int> > factors;
	int cnt;

	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			cnt=0;
			while(n%i==0)
			{
				cnt++;
				n=n/i;
			}
			factors.push_back(make_pair(i,cnt));
		}
	}

if(n!=1)
factors.push_back(make_pair(n,1));

for(auto i:factors)
{
cout<<i.first<<" ^ "<<i.second<<endl;
}

	
}





int main()
{
		#ifndef ONLINE_JUDGE
	freopen("inputs.txt","r",stdin);
 	freopen("outputs.txt","w",stdout);
 	#endif

int t;
cin>>t;
solve(t);

	return 0;
}



