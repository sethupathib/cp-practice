#include <bits/stdc++.h>
using namespace std;
void solve(int n, int k){
    int cnt=0;
    int r=n;
    while(r!=0){
        r=r/10;
        cnt++;
    }
    int t= pow(10,k);
    // cout<<t;
    int p,rem;
    p = n/t;
    rem = n%t;
    int res = rem* (pow(10,cnt-k));
    int ans = res+p;
    cout<<ans;
}

int main() {
    int n=375345;
    int k=2;
    solve(n,k);	
  //sol = 453753
	return 0;
}
