#include<stdio.h>
int main()
{
    int n;
    printf("enter any number ");
    scanf("%d",&n);
    n=(n-(n%10))/10;
    printf("number without last digit %d",n);
    return 0;
}
