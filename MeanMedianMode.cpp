#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<"Enter total number of element in the given array"<<endl;
int n;
cin>>n;
cout<<"Enter element of array"<<endl;
double arr[n];
double sum=0;
for(int i=0;i<n;i++){cin>>arr[i];
sum+=arr[i];
}
cout<<"Mean is"<<sum/n<<endl;

sort(arr,arr+n);
cout<<"Median is: ";
if(n%2==0){

cout<<(arr[n/2]+arr[n/2-1])/2;
}
else{
    cout<<arr[n/2];
}
cout<<endl;
int ans=0;
int c=0;
int c1=0;
for(int i=0;i<n;i++){
    c1=0;
    int temp=arr[i];
    while(temp==arr[i+1]){
    i++;
    c1++;
    }
if(c1>=c){
    ans=temp;
    c=c1;
}
}
cout<<"Mode is   :"<<ans<<endl;
return 0;
}
