#include <stdio.h>
int main() {
    float a,b,c;
    printf("Enter the first number : ");
    scanf("%f", &a);
    printf("Enter the second number : ");
    scanf("%f", &b);
    printf("Enter the third number : ");
    scanf("%f", &c);
    float average = (a+b+c)/3.0;
    printf("The Average of three numbers is : %f", average);
    return 0;
}