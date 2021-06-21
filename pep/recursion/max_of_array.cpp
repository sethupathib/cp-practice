#include <iostream>
using namespace std;

int solve(int *a, int id, int n){
    if(id>n) return 0;
    int misa = solve(a,id+1,n);
    if(misa>a[id]){
        return misa;
    }
    else return a[id];
    
}

int main()
{
int a[] = {12213,123,3435,54645,23423};
int n=sizeof(a)/sizeof(int);
cout<<solve(a,0,n);
return 0;
}
