#include<stdio.h>
#include<conio.h>
#include<math.h>


int main()
{
    int n=0;
    double x=0;
    double pola=0,polb=0,polc=0;
    printf("Which degree polynomial do you want?\n");
    scanf("%d",&n);
    double A[n];
    int i=0,k=0;
  double suma=0,sumb=0,sumc=0;
    printf("Enter thecoefficient:\n");
    for(i=0;i<=n;i++)
    {
        scanf("%lf",&A[i]);
    }

        double a,b,c;
        printf("GIVE THE VALUES OF A and B\n");
  scanf("%lf%lf",&a,&b);


   for(i=0;i<10;i++)
   {
suma=0;
sumc=0;
sumb=0;
         for(k=n;k>=0;k--)
    {
            suma+=(A[n-k]*(pow(a,k)));
            if(k==0)
                pola=suma;
    }

for(k=n;k>=0;k--)
    {

            sumb+=(A[n-k]*(pow(b,k)));
            if(k==0)
                polb=sumb;
    }
   c=(((a*polb)-(b*pola))/(polb-pola));
  for(k=n;k>=0;k--)
    {
            sumc+=(A[n-k]*(pow(c,k)));
            if(k==0)
                polc=sumc;
    }
       if(polc<0)
       {
           a=c;

       }
      else if(polc>0)
       {
           b=c;

       }
       printf("The value of m:%lf\n",c);
       printf("The value of f(m):%lf\n",polc);
       printf("\n");
   }
     printf("The value of m:%lf\n",c);
     return 0;
}
