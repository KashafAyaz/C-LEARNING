#include <stdio.h>
int main(){
int a=5;
printf("%d\n",a); //value of a
printf("%p\n",&a); //address of a
int* x=&a; //pointer x points to a
printf("%p\n",x); //value of x
printf("%p\n",&x); //address of x
printf("%d\n",*x); //value of a using pointer x
*x=8; //changing value of a using pointer x
printf("%d\n",a); //value of a after changing it using pointer x
return 0;
}