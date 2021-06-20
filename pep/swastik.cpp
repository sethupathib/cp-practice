#include <bits/stdc++.h>
//swastik
using namespace std;

void solve(int n){
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            // cout<<"*";
            if(i==1){
                if(j<=n/2 + 1||j==n){
                    cout<<"*";
                }
                else cout<<" ";
            }
            else if(i<=n/2 ){
                if(j==n/2 + 1 || j==n){
                    cout<<"*";
                }
                else cout<<" ";
            }
            else if(i==n/2 + 1) cout<<"*";
            else if(i<n){
                if(j==1 || j==n/2 + 1){
                    cout<<"*";
                }
                else cout<<" ";
            }
            else
            // if(i==n){
            if(j==1 || j>=n/2 + 1){
                cout<<"*";
            } else cout<<" ";
            // }
        }
        cout<<endl;
    }
    
}

int main() {
    int n=5;
    solve(n);	
	return 0;
}
