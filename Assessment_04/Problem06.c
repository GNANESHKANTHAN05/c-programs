#include<stdio.h>
int main()
{
    int i=11;
    Loop:
    if(i%2==1)
        printf("%d\n",i);
    i++;

    if(i<20)
        goto Loop;
}