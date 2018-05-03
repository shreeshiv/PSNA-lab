#include<bits/stdc++.h>
using namespace std;


int main(){
double x,y,z;
double arr[3][4];
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
    cin >>arr[i][j];
    }
}cout<<"Enter initial approx.";


cin >>x;
cin >>y;
cin >>z;

for(int i=0;i<10;i++){
      x=(arr[0][3]-y*arr[0][1]-z*arr[0][2])/arr[0][0];
      y=(arr[1][3]-x*arr[1][0]-z*arr[1][2])/arr[1][1];
      z=(arr[2][3]-x*arr[2][0]-y*arr[2][1])/arr[2][2];

      cout<<x<<" "<<y<<" "<<z<<"\n";
}

cout<<"final answer is :"<<x<<" "<<y<<" "<<z;

return 0;
}
