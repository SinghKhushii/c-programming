#include<stdio.h>
void pf(int);
int main()
{
    int n;
    printf("enter the number:\n");
    scanf("%d",&n);
    pf(n);
    return 0;
}
void pf(int a){
    if(a==0)
    {
        return;
    }
    printf("hello khushi you made it to here dw!\n");
    pf(a-1);
    
}