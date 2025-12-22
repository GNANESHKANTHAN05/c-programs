#include<stdio.h>
int main ()
{
int x,y,d1,d2;
printf("Enter Number :");
scanf("%d",&x);
d1=(x%100)/10;
d2=x%10;
if(d1==d2)
    printf("Success");
else
    printf("Failure");
}

