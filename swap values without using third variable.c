#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers ");
    scanf("%d%d",&a,&b);
    printf("value of a=%d and b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swapped values of a=%d and b=%d",a,b);
    return 0;

}
