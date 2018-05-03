#include<bits/stdc++.h>
using namespace std;
int siz;
int v;
int q[10000];
int fron[100];
int rear[100];
void push(int val,int prio,int n){
if(rear[prio]>n){
cout<<"Queue is overflowed";
}
else{
q[prio*n +(rear[prio])]=val;
rear[prio]++;
}
}
int pop(int n,int v){
    int prio=-1;
    for(int i=v-1;i>=0;i--){
        if(fron[i]==rear[i])continue;
        else{
            prio=i;
            break;
        }
    }

if(prio==-1){
cout<<"Queue is under flowed";
}
else{
    int temp=q[prio*n +(fron[prio])];
    fron[prio]++;
    return temp;
}
}
void ini(int n){
for(int i=0;i<100;i++){
    fron[i]=0;
    rear[i]=0;

}

}
void prin(int n){
    for(int i=0;i<n;i++){
    cout<<"Queue with prio :"<<i<<" >>  ";
    for(int j=(n*i+fron[i]);j<(n*i+rear[i]);j++)cout<<q[j]<<" ";

    cout<<endl;
}
}
int main(){

cout<<"Enter the total size"<<endl;
cin >>siz;
cout<<"enter the total space."<<endl;
cin >>v;
int n=siz/v;
ini(n);
int tem;
cout<<"Enter 1 for push and 2 for pop and 3 for exit";
while(1){
        cin >>tem;
        if(tem==3){
            break;
        }
        else if (tem==1){
            //pushing
            int val;
            int tem2;
            cout<<"enter value and priority respectively"<<endl;
            cin >>val>>tem2;
            push(val,tem2,n);
        }
        else{

            cout<<"poped element is :"<<pop(n,v)<<endl;
        }
prin(n);

}

cout<<"final queue"<<endl<<endl;

prin(n);
return 0;
}
