#include <stdio.h>
#define PI 3.14

int main() {
    double radius, volume;
    scanf("%lf", &radius);
    
    
    volume = (4.0 / 3.0) * PI * radius * radius * radius;
    
    
    printf("%.2f", volume);
    
}