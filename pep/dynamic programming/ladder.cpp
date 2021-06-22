#include <bits/stdc++.h>
using namespace std;
int dp[10000];

int steps(int n, int *dp){
    
    if(n==0){
        return 1;
    }
    else if(n<0) return 0;
    else if(dp[n]!=0) return dp[n];
    
    int n1 = steps(n-1,dp);
    int n2 = steps(n-2,dp);
    int n3 = steps(n-3,dp);
     dp[n] = n1+ n2+ n3;
    return dp[n];
}
int main(){
    int n=4;
   
    cout<<steps(n,dp);
    return 0;
}
