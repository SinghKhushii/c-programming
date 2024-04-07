#include<stdio.h>
#include<string.h>
float squarearea(float side);
float circlearea(float radi);
float rectanglearea(float a,float b);
int main()
{
    float a,b;
    printf("enter the two number:\n");
    scanf("%f,%f",&a,&b);
    printf("area of square:%f\n",squarearea(a));
    printf("area of rectangle:%f\n",rectanglearea(a,b));
    printf("area of the circle:%f\n",circlearea(b));
}
float squarearea(float side){
    side*=side;
    return side;
}
float circlearea(float radi)
{
    return 3.14*radi*radi;
}
float rectanglearea(float a,float b){
    return a*b;
}