#include<stdio.h>
int main()
{
    int n,x;
    printf("enter the number you want multiplication of:\n");
    scanf("%d",&n);
    printf("Multiplication Table of %d is:\n",n);
    for(int i=1;i<=10;i++)
    {
      // x=n*i;
       printf("%d*%d=%d\n",n,i,x=n*i);
    }
    return 0;
    }