
//fast exponentiation
//author : sethupathi

#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

void filterChars(int n, char a[])
{

int j=0;

while(n>0)
{
	int last_bit = n&1;
	if(last_bit)
	{
		cout<<a[j];
	}
	j++;
	n=n>>1;
}
cout<<endl;

}

void solution(char a[])
{

int n = strlen(a);

for (int i = 0; i < (1<<n); ++i)
{
		
	filterChars(i,a);
	/* code */
}

}


int main()

{

	#ifndef ONLINE_JUDGE
	freopen("inputs.txt","r",stdin);
 	freopen("outputs.txt","w",stdout);
 	#endif

char a[100];
cin>>a;

solution(a);



	return 0;
	
}