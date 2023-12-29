#include<stdio.h>
int main() {
    float p,b,h,d,x;
    scanf("%f%f%f",&b,&h,&d);
    p=b*12/100;
    x=b+h+d+p;
    printf("%.2f
%.2f",p,x);
}