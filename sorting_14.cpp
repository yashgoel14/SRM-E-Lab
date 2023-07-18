#include <bits/stdc++.h>
using namespace std;
float roundoff(float value, unsigned char prec){
  float pow_10 = pow(10.0f, (float)prec);
  return round(value * pow_10) / pow_10;}
  
int ind(string s){
    int index;
    string ski[3] = {"RUBBER","WOOD","STEEL"};
     for(int i=0;i<3;i++){
        if(ski[i]==s){
            index = i;
            break;}}
    return index;}
int inde(string s){
    int index;
    string surface[5] = {"CONCRETE","WODD","STEEL","RUBBER","ICE"};
    for(int i=0;i<5;i++){
        if(surface[i]==s){
            index = i;
            break;}}
    return index;}
int main(){
    double values[5][3] = {{0.90,0.62,0.57},{0.80,0.42,0.30},{0.70,0.30,0.74},{1.15,0.80,0.70},{0.15,0.05,0.03}};
    string s1,s2;
    cin >> s1 >> s2;
    int index1=-1,index2=-1;
    index1 = ind(s1);
    index2 = inde(s2);
    cout <<fixed<<setprecision(2) << values[index2][index1]<<" ";
    cout <<fixed<<setprecision(1) <<roundoff(atan(values[index2][index1])*180/3.1415,1);
	return 0;}