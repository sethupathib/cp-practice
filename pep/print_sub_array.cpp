#include <bits/stdc++.h>
using namespace std;

void solve(int *a,int n){
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        for(int k=i;k<=j;k++){
            cout<<a[k];
        }
        cout<<endl;
    }
}
    
    
}

int main() {
    int a[4] = {3,2,0,1};
    int n=4;
    solve(a,n);	
	return 0;
}
