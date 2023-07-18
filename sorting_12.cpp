#include<iostream>

using namespace std;

int main(){
    int p,q,r,i;
    int c;
    cin >> c;
    for(i=0;i<c;i++){
        cin >> p >> q >> r;
        if(r>=5){
            q+= (r-1)/5;
            r = ((r-1)%5)+1;
        }
        if (q>=10){
            p+=(q-1)/10;
            q = ((q-1)%10)+1;
        }
        cout << p << " " << q << " " << r << endl;
    }
    return 0;
}