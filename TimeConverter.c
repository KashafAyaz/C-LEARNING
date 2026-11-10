#include  <stdio.h>
int main() {
    float seconds;
    printf("Enter the time in seconds : ");
    scanf("%f",&seconds);
    float minutes = seconds/60;
    float hours = minutes/60;
    float days = hours/24;
    printf("The time in minutes is : %f\n", minutes);
    printf("The time in hours is : %f\n", hours);
    printf("The time in days is : %f\n", days);
    return 0;
}