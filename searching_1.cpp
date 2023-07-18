#include<bits/stdc++.h>

using namespace std;

int main(){
    string str;
    getline(cin,str);
    vector<string>v;
    for(int i=0;i<str.length();i++){
        string s = " ";
        int index=0;
        if(str[i]!=' '){
            strcpy(s[index],str[i]);
            index++;
        }
        else{
            cout << s;
            index=0;
            v.push_back(s);
        }
    }
    /*for(int i =0;i<str.length();i++){
        int count=0;
        if(str[i]!=' '){
            cout << str[i];
        }
        else{
            count++;
        }
    }*/
    return 0;
}