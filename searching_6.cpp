#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,a,i,j;
    cin >> t;
    while(t--){
        int count = 0;
        cin >> a;
        for(i=0;i<=sqrt(a);i++){
            for(j=0;j<=i;j++){
                if(pow(i,2)+pow(j,2)==a){
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}