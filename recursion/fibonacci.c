#include <stdio.h> //using multiple calls
int fib(int n){
if(n==1 || n==2) return 1;
int a=fib(n-1);
int b=fib(n-2);
return a+b;
}
int main(){
int n;
printf("Enter n: ");
scanf("%d",&n);
int fibonacci=fib(n);
printf("The fibonacci series upto %d is %d",n,fibonacci);
return 0;

}