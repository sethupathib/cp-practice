#include <bits/stdc++.h>
using namespace std;
//floor and ceiling
void solve(int *a,int n, int q){
    int st = 0;
    int end = n-1;
    int fi=-1,li=-1;
    while(st<=end){
        int mid = (st+end)/2;
        if(q<a[mid]){
            end=mid-1;
        
        }
        if(q>a[mid]){
            st=mid+1;
        
        }
        else
        {
            fi=mid;
            end=mid-1;
        }
        
    }
    int st1=0;int end1=n-1;
    while(st1<=end1){
        int mid = (st1+end1)/2;
        if(q<a[mid]){
            end=mid-1;
        
        }
        if(q>a[mid]){
            st1=mid+1;
        
        }
        else
        {
            li=mid;
            st1=mid+1;
        }
        
    }
// cout<<fi<<" "<<li;
cout<<li;
}
    
    


int main() {
    int a[5] = {10,20,40,40,40};
    int n=sizeof(a)/sizeof(int);
    int q=40;
    solve(a,n,q);	
	return 0;
}
