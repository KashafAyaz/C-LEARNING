#include <stdio.h>
int main () {
    float radius;
    printf("Enter radius : ");
    scanf("%f",&radius);
    float pi = 3.14159;
    float A = pi * radius * radius;
    printf("The Area is : %f" , A);
    return 0;
}