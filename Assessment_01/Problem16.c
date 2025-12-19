#include<stdio.h>
int main ()
{
int x,y,d1,d2,d3,d4;
printf("Enter Number :");
scanf("%d",&x);
d1=x/1000;
d2=(x/100)%10;
d3=(x%100)/10;
d4=x%10;
y=(d1*100)+(d2*1000)+(d3*10)+(d4*1);
printf("Result = %d",y);
}
