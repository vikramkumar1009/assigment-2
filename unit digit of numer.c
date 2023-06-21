#include<stdio.h>
int main()
{
   int n;
   printf("enter any number");
   scanf("%d",&n);
   n=n%10;
   printf("unit digit of number is %d", n);
   return 0;
}
