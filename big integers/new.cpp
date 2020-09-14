
// //bit integers
// //author : sethupathi
// #include <iostream>
// using namespace std;



// void multiply(int *a, int &n, int no)
// {

// 	int carry=0;
// 	for (int i = 0; i < n; i++)
// 	{
// 		int product = a[i]*no + carry;
// 		a[i] = product%10;
// 		carry=product/10;
		

// 		while(carry)
// 		{
// 			a[n] = carry%10;
// 			carry = carry/10;
// 			n++;
// 		}

// 	}
// 	// return n;
// }

// void solution(int number)

// {
// // int *a = new int[1000];

// // for (int i = 0; i < 1000; i++)
// // {
// // 	a[i]=0;
// // }

// 	int a[1000] = {0};
// a[0]=1;

// int n =1; //no. of digits in the number

// for (int x = 2; x <=number ; x++)
// {
// 	multiply(a,n,x);
// }

// for (int i=n-1;i>=0; i--)

// {
// 	cout<<a[i]<<" ";
// 	/* code */
// }

// // delete [] a;
// return;
// }
	



// int main()

// {

// 	#ifndef ONLINE_JUDGE
// 	freopen("inputs.txt","r",stdin);
//  	freopen("outputs.txt","w",stdout);
//  	#endif

// int n;
// cin>>n;


// solution(n);



// 	return 0;
	
// }



#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	#ifndef ONLINE_JUDGE
	freopen("inputs.txt","r",stdin);
 	freopen("outputs.txt","w",stdout);
 	#endif
    int n;
    cin>>n;
    
    int q=2;
    int arr[100000] = {0};
    arr[0] = 1;
    int len = 1;
    int x = 0;
    int num = 0;
    while(q<=n)
    {
        x=0;
        num =0;
        while(x<len)
        {
            arr[x] = arr[x] *q;
            arr[x] = arr[x]+num;
            num = arr[x]/10;
            arr[x] = arr[x]%10;
            x++;
        }
        while(num!=0)
        {
            arr[len] = num%10;
            num = num/10;
            len++;
        }
        q++;
    }
    len--;
    while(len>=0)
    {
        cout<<arr[len];
        len = len-1;
    }
}