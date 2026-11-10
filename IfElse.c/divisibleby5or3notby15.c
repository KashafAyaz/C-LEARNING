#include <stdio.h>
int main() {
int x;
printf("Enter the number : ");
scanf("%d",&x);
if((x%5==0 || x%3==0) && x!=15){
printf("the number is divisible by 5 or 3 not by 15");
}
else{
printf("the number is not matching the required condition");
}
return 0;
}