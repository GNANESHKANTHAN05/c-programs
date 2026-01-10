#include<stdio.h>
int main()
{
   int n,rev,num;
   printf("Enter the number : ");
   scanf("%d",&n);
   rev = 0;
   Loop:if(n >0)
   {
       num = n % 10;
       rev = (rev*10) + num;
       n = n / 10;
       goto Loop;
   }
   printf("%d",rev);
}
