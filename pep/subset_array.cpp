#include <bits/stdc++.h>
//bug is present
using namespace std;

void solve(int *a,int n){

int limit = pow(2,n);
for(int i=0;i<limit;i++){
    string set = " ";
    int temp=i;
    
    for(int j=n;j>=0;j--){
        int r = temp%2;
        temp = temp/2;
        
        if(r==0){
            set = "-\t" +set;
        }
        else
        set = a[j]+ "\t" + set;
    }
    
}
cout<<set<<endl;
}
    
    


int main() {
    int a[4] = {3,2,0,1};
    int n=4;
    solve(a,n);	
	return 0;
}
