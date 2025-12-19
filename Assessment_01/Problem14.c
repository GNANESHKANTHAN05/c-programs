#include<stdio.h>
int main ()
{
int x,y,d1,d2,d3;
printf("Enter Number :");
scanf("%d",&x);
d1=x/100;
d2=(x%100)/10;
d3=x%10;
y=(d1*1)+(d2*10)+(d3*100);
printf("Result = %d",y);
}
