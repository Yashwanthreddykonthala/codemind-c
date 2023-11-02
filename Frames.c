#include<stdio.h>
int main()
{
    float length,width,x;
    scanf("%f%f%f",&length,&width,&x);
    float perimeter=2*(length+width);
    float cost=perimeter*x;
    printf("%.0f",cost);
    return 0;
}