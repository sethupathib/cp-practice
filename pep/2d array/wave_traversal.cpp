#include <bits/stdc++.h>
using namespace std;
//wave traversal
void solve(int a[][4],int n,int m){
    
        for(int j=0;j<m;j++){
            if(j%2==0){
                for(int k=0;k<n;k++){
                    cout<<a[k][j]<<endl;
                }
            }
            else{
                for(int k=n-1;k>=0;k--){
                    cout<<a[k][j]<<endl;
                }
            }
        }
    
    
}
    


int main() {
    // int a[3][4] = {{0,1,2,3}, {4,5,6,7}, {8,9,10,11}};
        int a[4][4] = { { 1, 2, 3, 4 },
                      { 5, 6, 7, 8 },
                      { 9, 10, 11, 12 },
                      { 13, 14, 15, 16 } };  
    int n=4; int m=4;
    solve(a,n,m);	
	return 0;
}
