#include <iostream>
//flood fill algorithm aka rat in a maze
using namespace std;

void printpath(int path[][3], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<path[i][j];
        }
        cout<<endl;
    }
}

void floodfill_helper(int a[][3], int n, int path[][3], int x, int y){
    //base case
    if(x<0 || y<0|| x>n || y>n || path[x][y]==1){
        return;
    }
    if(x==n-1 && y==n-1){
        path[x][y]=1;
        printpath(path,n);
    }
    
    path[x][y]=1;
    floodfill_helper(a,n,path,x+1,y);
    floodfill_helper(a,n,path,x-1,y);
    floodfill_helper(a,n,path,x,y+1);
    floodfill_helper(a,n,path,x,y-1);
    path[x][y]=0;
}
void floodfill(int a[][3], int n, int x, int y){
    int path[3][3]={0};
    floodfill_helper(a,n,path,x,y);
}

int main()
{
int a[][3] = {{1,0,0},
           {1,1,1},
           {0,1,1}};
int n=3;
floodfill(a,n,0,0);
return 0;
}
