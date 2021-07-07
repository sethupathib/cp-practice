#include <bits/stdc++.h>
using namespace std;

void solve(int *a, int n){
    set<int>ar;
    set<int> dupe;
    for(int i=0;i<n;i++){
        if(ar.find(a[i])==ar.end()){
            ar.insert(a[i]);
        }
        else dupe.insert(a[i]);
    }
    set<int>:: iterator itr;
    for(auto itr:dupe){
        cout<<itr<<" ";
    }
    
}

int main() {
	int a[] = {1,2,3,3,1,6,4,7,4,9};
	int n=sizeof(a)/sizeof(int);
	solve(a,n);
	return 0;
}
