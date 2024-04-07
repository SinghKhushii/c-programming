#include<stdio.h>
int FACTORIAL(int);
int main(){
 int n;
 printf("n=\n");
scanf("%d",&n);
printf("factorial=%d\n",FACTORIAL(n));
return 0;
}
int FACTORIAL(int a){
    if (a==0)
    {
        return 1;
    }
    int totalsum = FACTORIAL(a-1)* a;
    return totalsum;
}