#include <stdio.h>
int main() {
int x;
printf("Enter a number : ");
scanf("%d",&x);
if(x % 5==0 ) {
if(x % 3==0 )   
printf("The number is divisible by 5 and 3");
}
else{
 printf("The number is not divisible by 5 and 3");  
}
    return 0;
}