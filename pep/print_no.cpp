#include <bits/stdc++.h>

using namespace std;

void solve(int n){
int cnt=0;
int temp=n;
while(temp!=0){
    // cout<<n%10<<endl;
    temp=temp/10;
    cnt++;
}
int div = pow(10,cnt-1);

while(div!=0){
int q= n/div;
cout<<q;
n=n%div;
cout<<endl;
div=div/10;
}
}

int main() {
    int n=37534275;
    solve(n);	
	return 0;
}
