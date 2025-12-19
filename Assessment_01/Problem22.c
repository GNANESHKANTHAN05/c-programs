#include<stdio.h>
int main ()
{
int x,y,tens;
printf("Enter Number :");
scanf("%d",&x);
tens=(x/10)%10;
y=x-(tens%2)*5;
printf("Result = %d",y);
}