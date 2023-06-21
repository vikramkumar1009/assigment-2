//Write a program to take a three-digit number from the user and rotate its digits by one position towards the right
#include<stdio.h>
main()
{
   int a;
   printf("Enter any three digit number \n");
   scanf("%d",&a);
   a=a%10*100+a/10;
   printf("rotates form of number is %d",a);
   return 0;
}
