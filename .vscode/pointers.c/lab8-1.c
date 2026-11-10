#include <stdio.h>
int main(){
int a=2;
float b=8.5;
char c='a';
int *ptra=&a; //ptr is used for pointers
float *ptrb=&b;
char *ptrc=&c;
printf("the address of %d is %p\n",a,&a); //format specifier of address is %p
printf("the address of %f is %p\n",b,&b); //&b and ptrb both can be used
printf("the address of %c is %p",c,&c);
return 0;
}