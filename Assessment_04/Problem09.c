#include<stdio.h>
int main()
{
    int i=10,d0,d1,sum;
    Loop:
    d0=i%10;
    d1=i/10;
    sum=d0+d1;
    if(sum==6)
      if(i%2==0)
        printf("%d\n",i);
    i++;

    if(i<99)
        goto Loop;
}