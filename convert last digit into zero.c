#include<stdio.h>
/*Write a program to make the last digit of a number stored in a variable as zero. (Example - if x=2345 then make it x=2340)*/
main()
{
   int x;
   printf("enter any number ");
   scanf("%d",&x);
   x=x/10;
   x=x*10;
   printf("the value of x is %d",x);
   return 0;
}
