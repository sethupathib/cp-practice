#include <bits/stdc++.h>
using namespace std;
//floor and ceiling
void solve(int *a,int n, int q){
    int st = 0;
    int end = n-1;
    int fl=0,ceil=0;

    while(st<=end){
        int mid = (st+end)/2;
        if(q<a[mid]){
            end=mid-1;
            ceil =a[mid];
        }
        else if(q>a[mid]){
            st=mid+1;
            fl=a[mid];
        }
        else{
        ceil = a[mid];
        fl=a[mid];
    }}
cout<<fl<<" "<<ceil;
// cout<<"test"<<endl;
}
    
    


int main() {
    int a[5] = {10,20,30,40,50};
    int n=sizeof(a)/sizeof(int);
    int q=43;
    solve(a,n,q);   
    return 0;
}
