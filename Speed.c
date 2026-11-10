#include <stdio.h>
int main () {
    float distance;
    printf("Enter distance : ");
    scanf("%f", &distance);
    float time;
    printf("Enter time : ");
    scanf("%f", &time);
    float v = distance / time;
    printf("the speed is ;%f" , v);
    return 0;
}