#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin >>n;

double arr[n][n+1];
for(int i=0;i<n;i++){

    for(int j=0;j<n+1;j++){
    cin >>arr[i][j];

    }

}

for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        double tem1=arr[j][i];
    for(int k=i;k<n+1;k++){

        arr[j][k]=arr[j][k]- ((arr[i][k]*tem1)/arr[i][i]);
    }
    }
}
cout<<endl;
for(int i=0;i<n;i++){

    for(int j=0;j<n+1;j++){
    cout<<arr[i][j]<<" "  ;

    }
    cout<<"\n";
}
double x,z,y;

z=arr[2][3]/arr[2][2];
y=(arr[1][3]-z*arr[1][2])/arr[1][1];
x=(arr[0][3]-z*arr[0][2]-y*arr[0][1])/arr[0][0];
cout<<"x is:"<<x<<endl;
cout<<"y is:"<<y<<endl;
cout<<"z is:"<<z;



return 0;
}
