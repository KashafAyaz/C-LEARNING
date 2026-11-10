#include<stdio.h>
#include<string.h>
struct bill {
    char itemname[50];
    int quantity;
    float amount;

};
int main(){
    //declaring a structure
    struct bill b1;
    b1.quantity =2;
    strcpy(b1.itemname, "pizza"); //arrays cant be assigned with =*/
    b1.amount = 120;
    printf("quantity : %d\n item Name : %s\n amount: %.2f\n" , b1.quantity , b1.itemname ,b1.amount);
    return 0;
    }