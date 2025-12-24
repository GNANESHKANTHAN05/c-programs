#include<stdio.h>
int main()
{
    int i=6;
    int sum=0;
    Loop:
    sum += i;
    i--;
    if(i>=1)
        goto Loop;
    printf("The sum is:%d",sum);
}