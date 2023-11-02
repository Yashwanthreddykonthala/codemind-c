#include<stdio.h>
int main()
{
    double inches,centimeters;
    scanf("%lf",&inches);
    centimeters=2.54*inches;
    printf("%.2lf",centimeters);
    return 0;
}