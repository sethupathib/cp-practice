#include <bits/stdc++.h>

using namespace std;

void solve(int n){
    int sp=n/2;
    int st=1;
    int val=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sp;j++){
            cout<<" ";
        }
        int cval=val;
        for(int j=1;j<=st;j++){
            cout<<cval;
        
            if(j<=st/2){
            cval++;}
            else{
                cval--;
            }
        }
        
        
        if(i<=n/2){
            sp--;
            st+=2; val++;
            }
        else{
            sp++;
            st-=2; val--;
            
        }
        cout<<endl;
    }}

int main() {
    int n=5;
    solve(n);	
	return 0;
}


/* op
  1
 232
34543
 232
  1
*/
