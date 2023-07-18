#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,a;
    cin >> t;
    vector<int>v;
    for(int i=2;i<100;i++){
        int flag =0;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                flag = 1;
                break;
            }
        }
        if(flag==0){
            v.push_back(i);
        }
    }        
    while(t--){
        cin >> a;
        cout << v[a-1] << endl;
    }
    return 0;
}