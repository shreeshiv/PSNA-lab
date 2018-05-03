#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter total number of input";
cin>>n;
int x[n],y[n],xy[n];
int sumx=0;
int sumy=0;

cout<<"Enter value for x";

for(int i=0;i<n;i++){
    cin>>x[i];
    sumx+=x[i];
}
cout<<endl;
cout<<"Enter value for y";
int sumxy=0;
for(int i=0;i<n;i++){
    cin>>y[i];
    xy[i]=x[i]*y[i];
    sumy+=y[i];
    sumxy+=xy[i];
}

double t1;
int sumx2=0;
for(int i=0;i<n;i++){
    sumx2+=(x[i]*x[i]);
}
t1=sqrt(n*sumx2-(sumx*sumx));
double t2;
int sumy2=0;
for(int i=0;i<n;i++){
    sumy2+=(y[i]*y[i]);
}
t2=sqrt(n*sumy2-(sumy*sumy));
double t3=(n*sumxy -(sumx*sumy));
double ans=t3/(t1*t2);
cout<<endl;

cout<<"Final answer is :";
cout<<ans;


return 0;
}
