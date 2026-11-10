#include <stdio.h>
int main () {
    int radius;
    printf("Enter radius : ");
    scanf("%f", &radius);
    int height;
    printf("Enter height : ");
    scanf("%f", &height);
    float pi = 3.145;
    float A = 4 *pi * radius * radius * height;
    printf("the volume is ;%f" , A);
    return 0;
}