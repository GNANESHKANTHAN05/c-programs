#include<stdio.h>
int main ()
{
int x,y,d0,d1,d2,d3,first,last;
printf("Enter Number :");
scanf("%d",&x);
d0=x%10;
d1=(x%100)/10;
d2=(x/100)%10;
d3=x/1000;
first=(d3*10) + d2;
last=(d1*10) + d0;
if(first==last)
    printf("Success");
else
    printf("Failure");
}