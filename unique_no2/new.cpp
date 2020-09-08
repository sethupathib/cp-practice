
//find unique numbers in a given set of numbers in an array
//strictly two
//author : sethupathi

#include<bits/stdc++.h>
using namespace std;



void solution(int n)
{
	int res=0;
	int no;
	int arr[100000] = {0};
	for (int i = 0; i < n; ++i)
	{
		cin>>no;
		arr[i]=no;
		res = res^no;

	}

int temp = res;
int pos = 0;

while((temp&1)!=1){
	pos++;
	temp = temp>>1;
}

//the first bit in res is at position 'pos'
int mask = (1<<pos);

//find those numbers which contain set bit at position 'pos'

int x=0;
int y=0;

for (int i = 0; i < n; ++i)
{
	if((arr[i]& mask)>0)
		x = x^arr[i];
}

y = res^x;

cout<<min(x,y)<<"\t"<<max(x,y);
// return ans;

}


int main()

{

	#ifndef ONLINE_JUDGE
	freopen("inputs.txt","r",stdin);
 	freopen("outputs.txt","w",stdout);
 	#endif

int n;
cin>>n;

solution(n);



	return 0;
	
}