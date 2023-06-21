#include<stdio.h>
int main()
{
  int x;
  printf("enter any number \n");
  scanf("%d",&x);

  if(x&1!=0)
    printf("number is odd");
  else
    printf("number is even");
   return 0;

}
