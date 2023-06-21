#include<stdio.h>
/*Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.*/
  main()
{
   int x;
   printf("enter any amount in rupees to convert into USD ");
   scanf("%d",&x);
   x=x/76.23;

   printf("converted amount in USD is %d",x);
   return 0;


}
