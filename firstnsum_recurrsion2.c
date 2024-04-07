#include<stdio.h>
int sum(int);
int main(){
 int n;
 printf("n=\n");
scanf("%d",&n);
printf("sum=%d\n",sum(n));
return 0;
}
int sum(int a){
    if (a==0)
    {
        return 0;
    }
    int totalsum=sum(a-1)+a;
    return totalsum;
}