#include<stdio.h>
int main()
{
    int i=1;
    int sum=0;
    Loop:
    //printf("%d\n",i);
    sum += i;
    i++;
    if(i<=5)
        goto Loop;
    printf("The sum is:%d",sum);
}