#include <bits/stdc++.h>
using namespace std;
int dp[10000];

void steps(int n){
    
    dp[0]=1;
    
    for(int i=1;i<=n;i++){
        if(i==1){
            dp[i]=dp[i-1];
        }
        else if(i==2){
            dp[i] = dp[i-1] + dp[i-2];
        }
        else
        dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
    }
    for(int i=0;i<n+1;i++){
        cout<<dp[i]<<" ";
    }
    
    
}

int main(){
    int n=10;
   
    steps(n);
    return 0;
}
