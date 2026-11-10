#include <stdio.h>
int main() {
    float totalbill;
    printf("Enter the total bill amount: ");
    scanf("%f" , &totalbill);
    int numberofpeople;
    printf("Enter the number of people: ");
    scanf("%d" , &numberofpeople);
    float amountperperson = totalbill / numberofpeople;
    printf("The amount per person is: %f\n", amountperperson);
    return 0;
}