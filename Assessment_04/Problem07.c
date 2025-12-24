#include<stdio.h>
int main()
{
    int i=11,d0,d1,sum;
    Loop:
    d0=i%10;
    d1=i/10;
    sum=d0+d1;
    if(sum==7)
      if(i%2==1)
        printf("%d\n",i);
    i++;

    if(i<99)
        goto Loop;
}