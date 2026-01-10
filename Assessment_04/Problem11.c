// Online C compiler to run C program online
#include<stdio.h>
int main()
{
   int n,count;
   printf("Enter the number : ");
   scanf("%d",&n);
   count = 0 ;
   Loop:if(n>0)
   {
       count += 1;
       n = n / 10;
       goto Loop;
   }
   printf("%d",count);
}
