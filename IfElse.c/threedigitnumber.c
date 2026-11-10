#include <stdio.h>
int main() {
   int x;
   printf("Enter the number : "); 
   scanf("%d" ,&x);
   if( x>99 && x<1000 ) {
    printf("It is a three digit number");
   }
   else {
    printf("It is not a three digit number");
   }
    return 0;
}