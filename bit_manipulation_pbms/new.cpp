
//Replace bits in N by M & Counting set bits
//author : sethupathi

#include<bits/stdc++.h>
using namespace std;



int decimalToBinary(int n)
{
	int ans=0;
	int p=1;

	while(n>0)
	{
		int last_bit = (n&1);
		ans = ans+ last_bit*p;
		p*=10;
		n= n>>1;
	}

	cout<<n<<endl;
return ans;

}


int main()

{

	#ifndef ONLINE_JUDGE
	freopen("inputs.txt","r",stdin);
 	freopen("outputs.txt","w",stdout);
 	#endif

int n,m,i,j;
cin>>n;
cout<<decimalToBinary(n);
// cin>>n>>m>>i>>j;


//clear range of bits in a number
int a= (~0)<<(j+1);
int b=(1<<i)-1;
int mask = a|b;
n = n&mask;
m=m<<i;
int ans = n|m;
cout<<ans;


//-----------------------

//Count set bits in a number


int ans1=0;

//slow

while(n>0)
{
	ans1 +=(n&1);
	n=n>>1;
}
	


//fast implementation
	while(n>0)
	{
		n = n & (n-1);
		ans1++;
	}



//in-built function

	cout<<__builtin_popcount(n);


	return 0;
	
}