#include<stdio.h>
int main ()
{
int x,y,d1,d2,sum;
printf("Enter Number :");
scanf("%d",&x);
d1=x/10;
d2=x%10;
sum=d1+d2;
y=x-(sum%2)*5;
printf("Result = %d",y);
}
