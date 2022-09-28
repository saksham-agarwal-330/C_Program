#include<iostream>
#include<math.h>
using namespace std;

float logfun(int x,int i)

{
    float ans=(x-1),ans1=ans/x;
    float finalans;
    if(i==1)
    {
     finalans=pow(ans1,i);
     printf("%dth term %f\n ",i,finalans);
     return finalans;
    }

    else
     {
     finalans=0.5*pow(ans1,i);
     printf("%dth term %f\n ",i,finalans);
     return finalans;
     }
        
}

int main()
{

int x;float sum=0;
scanf("%d",&x);

for(int i=1;i<=7;i++)
{
    sum=sum+logfun(x,i);
}

printf("%f",sum);

}
