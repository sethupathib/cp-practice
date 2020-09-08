
//find unique numbers in a given set of numbers in an array
//non unique numbers occur thrice
//author : sethupathi

#include<bits/stdc++.h>
using namespace std;



void solution(int n)
{
	

int no,ans=0;

//array of fixed space O(1) space complexity
//Not storing the inputs in this array. It's the o/p.
int cnt[64] = {0};

for (int i = 0; i < n; ++i)
{
	cin>>no;
	int j=0;
	while(no>0)
	{
		int last_bit = (no&1);
		cnt[j]+=last_bit;
		j++;
		no = no>>1;
	}
}

//iterate over the array and form the answer by converting 0s and 1s

int p=1;
for (int i = 0; i < 64; ++i)

{
	
	cnt[i]%= 3;
	ans+= (cnt[i]*p);
	p= p<<1;

}
cout<<ans<<endl;


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