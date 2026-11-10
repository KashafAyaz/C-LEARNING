#include <stdio.h>
int main() {
    float radius;
    printf("Enter radius : ");
    scanf("%f", &radius);
    float pi = 3.145;
    float v = (4.0/3.0) * pi * radius * radius * radius;
    printf("The volume is : %f" , v);
    return 0;
}