#include<bits/stdc++.h>
using namespace std;
double fun(double x){
return (2*x-3*sin(x)-5);
}
double dif(double x){
return 2-3*cos(x);

}

int main(){

double ans[10];
cin>>ans[0];

for(int i=1;i<10;i++)
{
    ans[i]=ans[i-1]-fun(ans[i-1])/dif(ans[i-1]);

    cout<<ans[i]<<endl;
}
return 0;
}
