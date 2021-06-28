#include <iostream>
using namespace std;
#define R 3
#define C 3

void printArray(int a[][3],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int minCost(int cost[][3], int m, int n){
    int dp[R][C];
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            dp[i][j]=0;
        }
    }
    
    if(m>R || n>C) return -1;
    //also check if the array has any element at all 
    //fill the dp array from bottom left to top right
    
    for(int i=R-1;i>=m;i--){
        for(int j=C-1;j>=n;j--){
            if(i==R-1 && j==C-1){
                dp[i][j]=cost[i][j];
            }
             else if(i==R-1){
                dp[i][j] = cost[i][j]+ dp[i][j+1];
                
            }
             else if (j==C-1){
                dp[i][j] = cost[i][j]+ dp[i+1][j];
            }
            else dp[i][j] = cost[i][j] + min(dp[i][j+1],dp[i+1][j]);
        }
    }
    printArray(cost,3);
    cout<<endl;
     printArray(dp,3);
     cout<<endl;
    return dp[m][n];
    
}

int main()
{
    int cost[R][C] = { { 1, 2, 3 },
                       { 4, 8, 2 },
                       { 1, 5, 3 } };
                        
    int start=0, end=0;                        
    cout << minCost(cost, start, end) << endl;
     
    return 0;
}
