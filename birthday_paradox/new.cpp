//birthday paradox problem
//sethupathi

#include<bits/stdc++.h>
using namespace std;





int main()
{
	
	#ifndef ONLINE_JUDGE
	freopen("inputs.txt","r",stdin);
 	freopen("outputs.txt","w",stdout);
 	#endif
    float x=1.0;
    //x denotes the no. of people having same birthday

    int people =0;
    int den = 365;
    int num = 365;

    float p;
    cin>>p;
	  if(p==1.0)
    {
         cout<<"366"<<endl;
         return 0;
    }

    while(x> 1-p)
    {
        x= x*(num)/den;
        people++; num--;
        cout<<"People--> "<<people<<"\t"<<"Probability--> "<<x<<endl;

    }
  


    
    
}
