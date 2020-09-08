
//bitwise xor practice
//get_bit
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
	int i,mask;
	cin>>i;
 	// for(int i=0;i<n;i++)
 	// {

 	// 	cin>> no;
 	// 	if (no&1) cout<<"odd"<<endl;
 	// 	else
 	// 	cout<<"even"<<endl;
 	// }
 	// cout<<ans;
 	// cout<<mask;

mask = (1<<i);
// int bit = (n&mask)>0? 1:0; //get bits

// int bit = n|mask; //set bits

//flip bit

int mask1 = ~(1<<i);
int bit = n & mask1;



//------------


//update bit with value v

int v =1;


//step 1 --> clear bit
//step 2 --> OR operation with v<<1

//clear bit

int mask2 = ~(1<<2);
int intermediate = n&mask2;

int final = intermediate | (v<<i);

// cout<<final;

//clear 'i' bits from right

int mask3 = ~(0)<<i;

// n= n&mask3;

//------------------------


//clear a range of bits from i to j

int j=3;
int a = ~0<<(j+1);
int b= (1<<i)-1;
// int b= ~(-1<<i);
int mask4 = a|b;
int n1 = n & mask4;


cout<<n1;

return 0;

}