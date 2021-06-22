#include <bits/stdc++.h>
using namespace std;
// int n=5;
 long dp[6]={0};


long fib(int n, long dp[]){
    if(n==0 || n==1) return n;
    if(dp[n]!=0) return dp[n];
   long fib1 = fib(n-1,dp);
  long fib2= fib(n-2,dp);
    dp[n] = fib1 + fib2;
    return dp[n];
}

int main(){
    int n=50;
   
    cout<<fib(n,dp);
    return 0;
}
