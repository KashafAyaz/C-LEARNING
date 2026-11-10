#include <stdio.h>
int main() {
    float celsius;
    printf("Enter the Celsius temperature : ");
    scanf("%f", &celsius);
    printf("The Celsius Temperature is : %f\n", celsius);
    float Kelvin = celsius + 273.15;
    printf("The Kelvin Temperature is : %f", Kelvin);
    return 0;
}