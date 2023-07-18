#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a,b,ans=0,flag =0;
    cin >> b >> a;
    for(int i=1;i<=b;i=i+3){
        if(flag==0){
            for(int j=i;j<i+a;j++){
                ans = ans - j;
            }
            flag =1 ;
        }
        else{
            for(int j=i;j<i+a;j++){
                ans = ans + j;
            }
            flag = 0;
        }
    }
    cout << ans << endl;
    return 0;
}