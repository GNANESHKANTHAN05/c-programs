#include<stdio.h>
int main()
{
    int n,original,first,mid,last,d,value;
    d=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    original = n;
    Loop:if(n>=10)
    {
        n = n / 10;
        d = d * 10;
        goto Loop;
    }
    last = n % 10;
    last = last * d;
    first = n;
    mid = (original % d) / 10 ;
    value = last + (mid*10) + first;
    printf("%d",value );
}
