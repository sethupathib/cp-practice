
//first and last occurence
//author : sethupathi

#include<bits/stdc++.h>
#include<string>
using namespace std;

void solution(int n,int x,int *a)
{

int first=0,last=0;

// for (int i = 0; i < n; ++i)
// {
// 	if(x!=a[i])
// 		continue; 	
// 	if (first==-1)			//beautifully crafted code
// 	{
// 		first=i;

// 	}
// 	last=i;
// 	cout<<last<<endl;
// }

// if (first!=-1)
// {
// 	cout<<"first occurence-->"<<first<<endl;
// 	cout<<"last occurence-->"<<last<<endl;
// 	/* code */
// }




//all occurences

for (int i = 0; i < n; ++i)
{

if (x==a[i])

{

	cout<<"occurence "<<last+1<<" --> position "<<i<<endl;

	last++;
	
}}


for (int i = 0; i < n; ++i)
{

if (x==a[i])
{
   // first++;
	cout<<"first occurence -->"<<i;
   break;
}
}
// cout<<a[]last;
}
	



int main()

{

	#ifndef ONLINE_JUDGE
	freopen("inputs.txt","r",stdin);
 	freopen("outputs.txt","w",stdout);
 	#endif

int n,x;
int a[100] = {0};
cin>>n>>x;

for (int i = 0; i < n; ++i)
{
	cin>>a[i];
}

solution(n,x,a);



	return 0;
	
}
