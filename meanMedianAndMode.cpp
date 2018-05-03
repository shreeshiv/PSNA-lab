#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
double x[n];
double a[n],b[n];
for(int i=0;i<n;i++){
    cin>>a[i]>>b[i];
    x[i]=(a[i]+b[i])/2;

}

double f[n];
double xf[n];

double sumf[n+1];
sumf[0]=0;
double sumfx=0;
for(int i=0;i<n;i++){
    cin>>f[i];
    sumf[i+1]+=(sumf[i]+f[i]);
    xf[i]=x[i]*f[i];
    sumfx+=xf[i];
}
cout<<"Mean is : ";
cout<<sumfx/sumf[n];
cout<<endl;
int rem=0;
double t1=sumf[n]/2;
for(int i=0;i<=n;i++){
    if(sumf[i]>=t1&&sumf[i+1]<=t1)
    {
        rem=i;
        break;
    }
}
double ans=0;
ans+=b[rem-1];
ans+=((sumf[n]/2 -sumf[rem])/f[rem-1])*(b[0]-a[0]);
cout<<"Median is :";
cout<<ans;
cout<<endl;
rem=0;
int min=-1;

for(int i=0;i<n;i++){
if(f[i]>min){
    min=f[i];
    rem=i;
}
}
//Estimated Mode = L +   fm − fm-1(fm − fm-1) + (fm − fm+1)  × w
ans=0;
ans+=a[rem];
ans+=((f[rem]-f[rem-1])/(2*f[rem]-f[rem-1]-f[rem+1]))*(b[0]-a[0]);

cout<<"Mode is:"<<ans;



return 0;}
