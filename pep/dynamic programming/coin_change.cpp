//Coin Change Problem Combination
//DP
#include <iostream>
using namespace std;
int dp[10]={0};

int solve(int *a, int n, int target){
    dp[0]=1;
    
    for(int i=0;i<n;i++){
        for(int j=a[i];j<target+1;j++){
            dp[j]+=dp[j-a[i]];
        }
    }
    
    for(int i=0;i<target+1;i++){
        cout<<dp[i]<<" ";
    }
    cout<<endl;
    return dp[target];
}

int main() {
	// your code goes here
	int a[3] = {2,3,5};
	int n= sizeof(a)/sizeof(int);
	int target=7;
	cout<<solve(a,n,target);
	return 0;
}
