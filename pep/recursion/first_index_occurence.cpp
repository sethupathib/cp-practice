#include <iostream>
using namespace std;

int solve(int *a, int id, int n,int x){
    if(id==n) return -1;
    if(a[id]==x) return id;
    else {
        int fiisa = solve(a,id+1,n,x);
        return fiisa;
    }
    
}

int main()
{
int a[] = {1,2,1,3,4};
int n=sizeof(a)/sizeof(int);
cout<<solve(a,0,n,3);
return 0;
}
