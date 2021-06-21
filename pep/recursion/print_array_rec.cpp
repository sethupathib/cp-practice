#include <iostream>
using namespace std;


void solve(int *a, int id, int n){
if( id == n){
    return;
}
cout<<a[id]<<" ";
id++;
solve(a,id,n);
    
}
int main()
{
int a[] = {1,2,3,4,5};
int n=sizeof(a)/sizeof(int);
solve(a,0,n);
return 0;
}
