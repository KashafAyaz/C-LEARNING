#include <stdio.h>
int main() {
   int x;
   printf("Enter the number : "); 
   scanf("%d" ,&x);
   if( x > 5 ) {
    printf("The number is greater than five");
   }
   else {
    printf("The number is not greater than five");
   }
    return 0;
}