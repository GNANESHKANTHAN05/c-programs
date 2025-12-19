#include<stdio.h>
int main ()
{
int x,y,d1,d2;
printf("Enter Number :");
scanf("%d",&x);
d1=x/10;
d2=x%10;
y=d1+d2;
printf("Result = %d",y);
}
