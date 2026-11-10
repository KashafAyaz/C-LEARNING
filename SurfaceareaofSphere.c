#include <stdio.h>
int main () {
    float radius;
    printf("Enter radius : ");
    scanf("%f" , &radius);
    float pi = 3.14519;
    float A = 4 *pi * radius * radius;
    printf("The surface area is : %f" , A);
    return 0;
}