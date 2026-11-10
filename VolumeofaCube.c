#include <stdio.h>
int main () {
    float side = 5;
    printf("Enter side :");
    scanf("%f" , &side);
    float V = side * side * side;
    printf("The volume is : %f" , V);
    return 0;
}