#include<stdio.h>
int main()
{
         int x,sum=0,rem=0;
         printf("Enter any three digit number\n");
         scanf("%d",&x);
         rem=x%10;
         x=x/10;
         sum=sum+rem;

          rem=x%10;
         x=x/10;
         sum=sum+rem;

          rem=x%10;
         x=x/10;
         sum=sum+rem;

         printf("sum of three digit number is %d\n",sum);
         return 0;
}
