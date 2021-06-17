#include <iostream>
using namespace std;


int solve(int *a1, int n1, int *a2, int n2){
    int sum[n1>n2?n1:n2];
    int n3 = sizeof(sum)/sizeof(int);
    int c=0;
    int i=n1-1;
    int j=n2 -1;
    int k = n3 -1;
    
    while(k>=0){
        int d=c;
        if(i>=0){
            d+=a1[i];
        }
        if(j>=0){
            d+=a2[j];
        }
        c =d/10;
        d=d%10;
        sum[k] =d;
        i--;
        j--;
        k--;
    }
    if(c!=0) cout<<c;
    for(int i=0;i<n3;i++){
        cout<<sum[i]<<" ";
    }
}

int main() {
	// your code goes here
int a1[5] = {9,4,3,2,4};
int a2[4] = {4,3,2,4};
int n1 = sizeof(a1)/sizeof(int);
int n2 = sizeof(a2)/sizeof(int);
    cout<<solve(a1,n1,a2,n2);	
	return 0;
}
