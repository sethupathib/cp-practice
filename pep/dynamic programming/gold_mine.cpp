#include <bits/stdc++.h>

//writing the core logic

for(int j=C-1;j>=0;j--){
	for(int i=0;i<=R-1;i++){
		if(j==C-1){
			dp[i][j] = arr[i][j];
		}
		else if(i==0){
			dp[i][j] = arr[i][j]+ max(dp[i][j+1],dp[i+1][j+1]);
		}
		else if(i==R-1){
			dp[i][j] = arr[i][j] + max(dp[i-1][j+1],dp[i][j+1]);
		}
		else dp[i][j] = arr[i][j]+ max(dp[i-1][j+1],max(dp[i][j+1],dp[i+1][j+1]));
	}

}

int max = dp[0][0];
for(int i=1;i<C;i++){
	if(dp[i][0]<max){
		max = dp[i][0];
	}
}
return max;
