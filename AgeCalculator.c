#include <stdio.h>
int main () {
    int birthyear;
    printf("Enter your birth year : ");
    scanf("%d" , &birthyear);
    int currentyear;
    printf("Enter the current year : ");
    scanf("%d\n" , &currentyear);
    int age = currentyear - birthyear;
    printf("Your age is : %d" , age);
    scanf("%d" , &age);
    return 0;
}
