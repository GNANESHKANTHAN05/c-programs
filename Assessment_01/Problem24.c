#include<stdio.h>
int main ()
{
int x,y,d1,d2;
printf("Enter Number :");
scanf("%d",&x);
d1=x/100;
d2=x%10;
y=x-(d1%2)*(d2%2)*5;
printf("Result = %d",y);
}