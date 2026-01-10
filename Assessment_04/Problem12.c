#include<stdio.h>
int main()
{
   int n,sum,num;
   printf("Enter an number : ");
   scanf("%d",&n);
   sum = 0;
   Loop:if(n >0)
   {
       num = n % 10;
       sum += digit;
       n = n / 10;
       goto Loop;
   }
   printf("%d",sum);
}
