#include<bits/stdc++.h>
using namespace std;
double fun(double coe[],int degree,double x){
double temp=0;

for(int i=0;i<=degree;i++)
{

    temp+=coe[i]*pow(x,i);
}
return temp;
}
double difff(double di[],int degree,double x){
double temp=0;

for(int i=0;i<degree-1;i++)
{

    temp+=di[i]*pow(x,i);
}
return temp;
}
double diff(double dif[],int degree,double x){
double temp=0;
for(int i=0;i<degree;i++)
{

    temp+=dif[i]*pow(x,i);
}
return temp;
}

int main(){

cout<<"Enter the number of degree";
int degree;
cin >>degree;
double coe[degree+1];
cout<<"Enter the coe. for equation";
for(int i=0;i<=degree;i++){
    cin >>coe[i];
}
double dif[degree];
for(int i=0;i<degree;i++){
    dif[i]=coe[i+1]*(i+1);
}
double di[degree-1];
for(int i=0;i<degree-1;i++){
    di[i]=dif[i+1]*(i+1);
}

double ans[11];
double x[11];
cout<<"Ente the value of x(0)";
cin>>ans[0];
cout<<"Satisfying condition wether for x(0) ::: |f(x0)*f''(x0)|<|f'(x0)*f'(x0)|"<<endl;
if((fabs(fun(coe,degree,ans[0])*difff(di,degree,ans[0])))<(fabs(diff(dif,degree,ans[0])*diff(dif,degree,ans[0]))))cout<<"yes condition is satisfied";
else cout<<"No condition is not satisfied!!!";

//x[i+1]=x[i]-f(x)/f'(x);
for(int i=0;i<10;i++){
    ans[i+1]=ans[i]-(fun(coe,degree,ans[i])/diff(dif,degree,ans[i]));

cout<<"   ";
cout<<diff(dif,degree,ans[i])<<"  ";
cout<<ans[i]<<endl;

}

return 0;

}
