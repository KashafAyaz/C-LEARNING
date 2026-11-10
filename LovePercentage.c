#include <stdio.h>
int main() {
    char ch1;
    printf("Enter the first character: ");
    scanf(" %c", &ch1);
    char ch2;
    printf("Enter the second character: ");
    scanf(" %c", &ch2);
    int sum = ch1 + ch2;
    printf("Sum: %d\n", sum);
    float compatibility = (sum % 100);
    printf("Compatibility: %f\n", compatibility);
    return 0;
}