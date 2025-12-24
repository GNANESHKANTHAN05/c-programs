#include<stdio.h>
int main()
{
    int i=1;
    Loop:
    if(i%2==1)
        printf("%d\n",i);
    i++;

    if(i<=9)
        goto Loop;
}