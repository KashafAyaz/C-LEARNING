/* Lab 5, Question 5: Uses a function int power(int base, int exp) (without using pow()) and a function void printTable(int n) 
that prints the multiplication table of n up to 10. Function prototypes are declaredabove main(). */
#include <stdio.h>
int power(int base, int exp);
void printTable(int n);
int main(void)
{
int base, exp, n;
printf("Enter base and exponent: ");
scanf("%d %d", &base, &exp);
if (exp < 0) {
printf("Error: exponent must be non-negative.\n");
}
else {
printf("%d^%d = %d\n", base, exp, power(base, exp));
}
printf("Enter a number for its multiplication table: ");
scanf("%d", &n);
printTable(n);
return 0;
}
int power(int base, int exp)
{
int result = 1, i;
for (i = 1; i <= exp; i++) {
result *= base;
}
return result;
}
void printTable(int n)
{
int i;
for (i = 1; i <= 10; i++) {
printf("%d x %d = %d\n", n, i, n * i);
}
}