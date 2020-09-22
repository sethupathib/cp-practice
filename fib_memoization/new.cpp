//matrix exponentiation

//This is a hard problem. You ought to spend more time
//with the problem to understand this completely
//sethupathi

// #include<iostream>
// #include<vector>
// using namespace std;
// #define int long long int
// #define ld long double
// #define F first
// #define S second
// #define P pair<int,int>
// #define pb push_back



// const int N=100005, M =22;


// vector<int> gr[N];



// void euler_tour(int cur, int par)
// {

// //dfs
// 	cout<<cur<<" ";
// 	for(auto x:gr[cur]){
// 		if(x!=par){
// 			euler_tour(x,cur);
// 			cout<<cur<<" ";
// 		}
// 	}
// 	return;
// }




// void solve()
// {
// int i,j,k,n,m,ans=0,cnt=0,sum=0;

// cin>>n;
// for (int i = 0; i < n-1; i++)
// {
// 	int x,y;
// 	cin>>x>>y;
// 	gr[x].pb(y);
// 	gr[y].pb(x);
// }

// 	euler_tour(1,0);
// }

// void init()
// {
// 	ios_base:: sync_with_stdio(false);
// 	cin.tie(NULL); cout.tie(NULL);
// 	#ifndef ONLINE_JUDGE
// 	freopen("inputs.txt","r",stdin);
//  	freopen("outputs.txt","w",stdout);
//  	#endif
// solve();
// // return 0;
  
// }


#include <bits/stdc++.h>
using namespace std;

int F[100];

int solve(int n)
{


	if(n<=1)
	{
		return n;
	
	}
	
		if(F[n]!=-1)
		{
			return F[n];
		}
		
		F[n] = solve(n-1)+ solve(n-2);
		cout<<F[n]<<"\t";
		


	return F[n];
}




int main()
{
		#ifndef ONLINE_JUDGE
	freopen("inputs.txt","r",stdin);
 	freopen("outputs.txt","w",stdout);
 	#endif



for(int i=0;i<100;i++)
{
	F[i]=-1;
}

int n;
cin>>n;
cout<<n<<endl;
// for(int i=0;i<n;i++)
// {
// 	cout<<solve(n);
// }

cout<<solve(n)<<endl;


	return 0;
}




















