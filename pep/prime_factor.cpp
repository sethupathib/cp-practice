#include <bits/stdc++.h>

using namespace std;

void solve(int n){
    for(int div=2;div*div <=n;div++){
        while(n%div==0){
            n=n/div;
            cout<<div<<" ";
        }
    }
    if(n!=1) cout<<n<<endl;

}
int main() {
    int n=46;
    solve(n);	
	return 0;
}
