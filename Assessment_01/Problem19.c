#include<stdio.h>
int main ()
{
int x,y,d1,d2;
printf("Enter Number :");
scanf("%d",&x);
d1=x/100;
d2=(x%100)/10;
y=(d1*100)+(d2*10)+(2);
printf("Result = %d",y);
}
