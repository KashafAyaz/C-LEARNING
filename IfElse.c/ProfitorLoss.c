#include <stdio.h>
int main() {
     int costprice , sellingprice;
     printf("Enter the cost price : ");
     scanf("%d", &costprice);
     printf("Enter the selling price : ");   
     scanf("%d", &sellingprice);
     if(sellingprice>costprice) {
        printf("Profit");
     }
     else if(sellingprice<costprice) {
         printf("Loss");
     }
     else {
         printf("No Profit No Loss");
     }
     return 0;
 }