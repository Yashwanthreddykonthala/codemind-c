#include<stdio.h>
#include<math.h>
int main()
{
    double side1,side2,hypotenuse;
    scanf("%lf",&side1);
    scanf("%lf",&side2);
    hypotenuse=sqrt(side1*side1+side2*side2);
    printf("%.2lf
",hypotenuse);
    return 0;
}