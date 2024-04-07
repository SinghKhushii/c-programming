#include<stdio.h>
float convert(float celsius);
int main(){
    float result=convert(32);
    printf("reult=%f",result);
    return 0;
}
float convert(float celsius)
{
    float f=(celsius*(9.0/5.0))+32;
    return f;
}