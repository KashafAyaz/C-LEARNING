#include <stdio.h>
int main () {
   int x;
   printf("Enter first number :");
   scanf("%d" , &x);
   int y;
   printf("Enter second number :");
   scanf("%d" , &y);
   int z = x + y;
   printf("The sum is : %d" , z);
   return 0;
}