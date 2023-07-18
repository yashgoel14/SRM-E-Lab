#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,M,C,D;
    cin >> t;
    while(t--){
        vector<int>v;
        int i = 0;
        cin >> M >> C >> D;
        while(M>0){
            int ans = pow(M,2)*C + pow(i,2)*D;
            v.push_back(ans);
            M--;
            i++;
        }
        sort(v.begin(),v.end());
        cout << v[0] << endl;
    }
        return 0;
}