#include <iostream>
using namespace std;

void reverse(int *a, int start, int n){
    int i=start;
    int j=n;
    while(i<j){
        int temp = a[i];
        a[i] =a[j];
        a[j]= temp;
        i++;
        j--;
    }
}

void solve(int *a, int n, int k){
    k = k%n;
    if(k<0){
        k+=n;
    }
    reverse(a,0,n-k-1);
    reverse(a,n-k,n-1);
        for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        
    }cout<<endl;
    reverse(a,0,n-1);
    cout<<endl;
    
    cout<<"Reversed k units"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        
    }
    
}

int main() {
	// your code goes here
// int a1[9] = "abcdefgh";
int a1[4] = {1,2,3,4};
int n1 = sizeof(a1)/sizeof(int);
// int n1=9;
int k=1;

    solve(a1,n1,k); 
    // reverse(a1,0,n1-1);	


// for(int i=0;i<n1;i++){
//         cout<<a1[i]<<" ";
    // }
	return 0;
}
