#include <stdio.h>
int factorial(int n){
if(n==1 || n==0) return 1; //base code the n==0 is for wen n=0
return n*factorial(n-1); //n=5 then 5*4! then 4*3! then 3*2! then 2*1! it stops bcz of condition
} //n*(n-1)! the formula for n number of values
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("The factorial of %d is %d",n,fact);
    return 0;
}