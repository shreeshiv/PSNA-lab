#include<bits/stdc++.h>
using namespace std;
double arr[3][4];

int main(){
    int n=3;
for(int i=0;i<n;i++){
    for(int j=0;j<n+1;j++){
   cin>>arr[i][j];
    }
}

for(int i=0;i<n-1;i++){

    int a=i,b=i;
    double tem1=arr[i][i];
    for(int j=i;j<n;j++){
    if(abs(tem1)<abs(arr[j][i])){
    b=j;
    tem1=arr[j][i];
    }
    }
    for(int l=0;l<n+1;l++){
    double tem2=arr[a][l];
    arr[a][l]=arr[b][l];
    arr[b][l]=tem2;
    }
     double pivot=arr[i][i];
    for(int j=i+1;j<n;j++){
        double temp=arr[j][i];
        for(int k=i;k<n+1;k++){
            arr[j][k]-=(arr[i][k]*temp)/pivot;
        }
    }
}

for(int i=0;i<n;i++){
    for(int j=0;j<n+1;j++){
   cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}



return 0;
}
