#include <stdio.h>
int main() {
   int x;
   printf("Enter the number : "); 
   scanf("%d" ,&x);
   if( x % 5 == 0 && x % 3 == 0) {
    printf("The number is divisible by five and three");
   }
   else if(x % 5 != 0 && x % 3 == 0) {
    printf("The number is not divisible by five but divisible by three ");
   }
   else if(x % 5 == 0 && x % 3 != 0) {
    printf("The number is divisible by five but not divisible by three ");
   }
    return 0;
}