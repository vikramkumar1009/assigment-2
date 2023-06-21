#include<stdio.h>
main()
{
    int a,b,c;
    printf("enter two numbers ");
    scanf("%d%d",&a,&b);
    printf("value of a=%d and b=%d\n",a,b);
    c=a;
    b=a;
    a=c;
    printf("swapped values of %d and %d",a,b);
    return 0;
}
