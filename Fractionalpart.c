#include <stdio.h>
int main() {
    float x;
    scanf("%f",&x);
    int y;
    y = x;
    float z = x - y;
    printf("the fractional part of %f is : %f",x,z);
    return 0;
}
