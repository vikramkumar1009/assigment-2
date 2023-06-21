#include<stdio.h>
main()
{
    int x,count=0;
    int result=0;
    printf("Enter any number\n ");
    scanf("%d",&x);
    while(x!=0)
       {
           result=x&1;
           count++;
           if(result==1)
           {
               printf("%d",count);
               break;
           }
           x=x>>1;
       }
       return 0;


}
