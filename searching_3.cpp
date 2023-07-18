#include <bits/stdc++.h>
using namespace std;
int factorial(int n){
    int ans = 1;
    for(int i=2;i<=n;i++){
        ans = ans * i;
    }
    return ans;
}
int main()
{
    int t,b,n,r;
    cin >> t;
    while(t--){
        cin >> b >> n >> r;
        int f = factorial(n);
        int ans = pow(b,f);
        int ans2 = ans%r;
        cout << ans2;
    }
	return 0;
}