#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
double x[n];
double y[n];
double sumx=0,sumy=0,sumxy=0;
double sumx2=0;
double sumy2=0;
for(int i=0;i<n;i++){
    cin>>x[i];
    cin>>y[i];
    sumx+=x[i];
    sumy+=y[i];
    sumxy+=x[i]*y[i];
    sumx2+=x[i]*x[i];
    sumy2+=y[i]*y[i];

}
double xm=sumx/n;
double ym=sumy/n;
double tt=(n*sumxy-sumx*sumy)/(n*sumx2-sumx*sumx);
cout<<"eqution of regression line of y on x ";
cout<<"(y-"<<ym<<") =("<<tt<<")*(x-"<<xm<<")\n";


double ttt=(n*sumxy-sumx*sumy)/(n*sumy2-sumy*sumy);
cout<<"eqution of regression line of x on y ";
cout<<"(x-"<<xm<<") =("<<ttt<<")*(y-"<<ym<<")\n";



return 0;
}
