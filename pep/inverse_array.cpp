#include <bits/stdc++.h>
using namespace std;

void solve(int *a,int n){
    int b[4];
    for(int i=0;i<n;i++){
        int v =a[i];
        b[v]=i;
        // cout<<a[i];
    }
    for(int i=0;i<n;i++){
        cout<<b[i];
    }
    
    
}

int main() {
    int a[4] = {3,2,0,1};
    int n=4;
    solve(a,n);	
	return 0;
}
