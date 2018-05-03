#include<bits/stdc++.h>
using namespace std;
double fun(int a,double p){
double t=1;

for(int i=0;i<a;i++){
    t*=(p-i)/(i+1);
}
return t;
}
double func(int a,double p){
double t=1;

for(int i=0;i<a;i++){
    t*=(p+i)/(i+1);
}
return t;
}
int main(){
int n;
cout<<"Enter the value of n\n";

cin >>n;

double arr[n][n];
double x[n];


for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
   arr[i][j]=0;
    }

}

cout<<"enter the value of x and y respectively";

for(int i=0;i<n;i++){
    cin >>x[i];
     cin >>arr[i][0];
}

for(int i=1;i<n;i++){
    for(int j=0;j<n-i;j++){
        arr[j][i]=arr[j+1][i-1]-arr[j][i-1];
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

cout<<"Please enter the value of x for forward interpolation";
cout<<endl;
double y;
cin >>y;
double p=(y-x[0])/(x[1]-x[0]);
cout<<"p is :"<<p<<endl;
double ans=0;
for(int i=0;i<n;i++){
    ans+=(fun(i,p)*arr[0][i]);

}

cout<<"Value of f(y) is :"<<ans;
cout<<endl;
cout<<endl;
cout<<"Please enter the value of x for backward interpolation";
cin >>y;
 p=(y-x[n-1])/(x[1]-x[0]);
cout<<"p is :"<<p<<endl;
 ans=0;
 for(int i=0;i<n;i++){
    ans+=(func(i,p)*arr[n-1-i][i]);

}

cout<<"Value of f(y) is :"<<ans;
return 0;
}
